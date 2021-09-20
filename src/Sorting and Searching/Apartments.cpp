#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	int A[n], B[m];
	for ( int i = 0 ; i < n ; i++ ) cin >> A[i];
	for ( int i = 0 ; i < m ; i++ ) cin >> B[i];
	sort(A, A+n);
	sort(B, B+m);
	int ans = 0;
	for ( int i = 0, j = 0 ; i < n && j < m ; )
	{
		if ( A[i] - k > B[j] )
		{
			j++;
		}
		else if ( A[i] + k < B[j] )
		{
			i++;
		}
		else
		{
			ans++;
			i++;
			j++;
		}
	}
	cout << ans;
}
