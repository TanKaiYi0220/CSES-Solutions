#include <bits/stdc++.h>
using namespace std;
int main()
{
	string seq;
	cin >> seq;
	int len = 0;
	vector<string> ans;
	sort(seq.begin(), seq.end());
	do
	{
		len++;
		ans.push_back(seq);
	}while(next_permutation(seq.begin(), seq.end()));
	cout << ans.size() << "\n";
	for ( string s : ans ) cout << s << "\n";
}
