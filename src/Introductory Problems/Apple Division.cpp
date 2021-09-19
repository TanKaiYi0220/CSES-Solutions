#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int W[n];
	long long ans = 1e11;
	for ( int i = 0 ; i < n ; i++ ) cin >> W[i];
	for ( int i = 0 ; i < 1 << n ; i++ )
	{
		int num = i;
		long long G[2] = {};
		for ( int j = 0 ; j < n ; j++ )
		{
			G[num&1] += W[j];
			num >>= 1;
		}
		ans = min(abs(G[0]-G[1]), ans);
	}
	cout << ans;
}
