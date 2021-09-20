#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long nums[n], dp[n];
	long long ans = -1e9;
	for ( int i = 0 ; i < n ; i++ )
	{
		cin >> nums[i];
		if ( !i ) dp[i] = nums[i];
		else dp[i] = max(dp[i-1]+nums[i], nums[i]);
		ans = max(dp[i], ans);
	}
	cout << ans;
}
