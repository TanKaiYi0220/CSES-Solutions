#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	set<array<int, 2>>C;
	for ( int i = 0 ; i < n ; i++ )
	{
		int a, b;
		cin >> a >> b;
		C.insert({2*a, 1});
		C.insert({2*b+1, -1});
	}
	int ans, len;
	ans = len = 0;
	for ( array<int, 2> c : C )
	{
		len += c[1];
		ans = max(len, ans);
	}
	cout << ans;
}
