#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, x;
	cin >> n >> x;
	int nums[n];
	map<int, int> R;
	for ( int i = 1 ; i <= n ; i++ )
	{
		int a;
		cin >> a;
		if ( R[x-a] )
		{
			cout << R[x-a] << " " << i;
			return 0;
		}
		R[a] = i;
	}
	cout << "IMPOSSIBLE";
}
