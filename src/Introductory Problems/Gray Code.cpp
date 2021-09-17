#include <bits/stdc++.h>
using namespace std;
void solve(vector<string> &gc, int n, int l)
{
	if ( l == n ) return;
	vector<string> new_gc;
	for ( string s:gc ) new_gc.push_back("0"+s);
	reverse(gc.begin(), gc.end());
	for ( string s:gc ) new_gc.push_back("1"+s);
	gc = new_gc;
	solve(gc, n, l+1);
}
int main()
{
	int n;
	cin >> n;
	vector<string> gc;
	gc.push_back("0");
	gc.push_back("1");
	solve(gc, n, 1);
	for ( string s:gc ) cout << s << "\n";
}
