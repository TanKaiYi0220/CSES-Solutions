#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	array<int, 2> M[n];
	for ( int i = 0 ; i < n ; i++ ) cin >> M[i][1] >> M[i][0];
	sort(M, M+n);
	int ans, last;
	ans = last = 0;
	for ( int i = 0 ; i < n ; i++ )
	{
		if ( M[i][1] >= last )
		{
			last = M[i][0];
			ans++;
		}
	}
	cout << ans;
}
