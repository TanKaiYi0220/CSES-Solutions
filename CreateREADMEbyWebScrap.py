from bs4 import BeautifulSoup
import requests
import markdown

# access html document
url = "https://cses.fi/problemset"
page = requests.get(url).text
doc = BeautifulSoup(page, 'html.parser')

# find category name
category_tag = doc.find_all('h2')[1:]
category_tag = list(map(lambda x:x.string, category_tag))

# find task name
task_list_tag = doc.find_all(class_='task-list')[1:]
def find_tag_name(x):
    tag_name_list = []
    for child in x.descendants:
        if child.name == 'a':
            tag_name_list.append(child.string)
    return tag_name_list
task_tag = list(map(lambda x:find_tag_name(x), task_list_tag))

# README
text = '''# CSES-Solution
> Accepted solutions for [CSES Problem Set](https://cses.fi/problemset).<br>
> These solutions are may not the best solution for each task. <br>
> I'm just sharing my own solutions or solution that I had found. <br>
'''

table_of_contents = "# Table of Contents\n"

for c in category_tag:
    rm_space = c.replace(" ", "-")
    table_of_contents += f'[{c}](#{rm_space})\n'

contents = ""
for idx, c in enumerate(category_tag):
    rm_space = c.replace(" ", "-")
    src_c = c.replace(" ", "%20")
    src = f"src/{src_c}/"
    contents += f"# {c} <a id='{rm_space}'></a>\n"
    for t in task_tag[idx]:
        src_t = t.replace(" ", "%20")
        real_src = src + src_t + ".cpp"
        contents += f'* [{t}]({real_src})\n'

text = text + table_of_contents + contents

with open('README.md', 'w') as f:
    f.write(text)
print("README Updated")
f.close()
