#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	long long mod = 1e9+7;
	cin >> n;
	long long ans = 1;
	for ( int i = 0 ; i < n ; i++ )
	{
		ans <<= 1;
		ans %= mod;
	}
	cout << ans;
}
