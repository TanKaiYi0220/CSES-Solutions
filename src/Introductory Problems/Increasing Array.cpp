#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int maxN = 0;
	long long ans = 0;
	for ( int i = 0 ; i < n ; i++ )
	{
		int x;
		cin >> x;
		if ( x < maxN ) ans += maxN - x;
		maxN = max(maxN, x);
	}
	cout << ans;
}
