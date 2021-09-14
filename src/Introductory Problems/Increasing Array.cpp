#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int nums[n];
	int maxN = 0;
	long long ans = 0;
	for ( int i = 0 ; i < n ; i++ )
	{
		cin >> nums[i];
		if ( nums[i] < maxN ) ans += maxN - nums[i];
		maxN = max(maxN, nums[i]);
	}
	cout << ans;
}
