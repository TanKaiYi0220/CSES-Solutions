#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long r, c;
		cin >> r >> c;
		if ( r == c )
		{
			cout << r*c - r + 1;
		}
		else if ( c > r )
		{
			if ( c&1 ) cout << c*c - r + 1;
			else cout << (c-1)*(c-1) + r;
		}
		else
		{
			if ( !(r&1) ) cout << r*r - c + 1;
			else cout << (r-1)*(r-1) + c;
		}
		cout << "\n";
	}
}
