#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, x;
	cin >> n >> x;
	int P[n];
	for ( int i = 0 ; i < n ; i++ ) cin >> P[i];
	sort(P, P+n);
	int ans = 0;
	for ( int i = 0, j = n-1 ; i <= j ; )
	{
		ans++;
		if ( P[i] + P[j] <= x ) i++;
		j--;
	}
	cout << ans;
}
