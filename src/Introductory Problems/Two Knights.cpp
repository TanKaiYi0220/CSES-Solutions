#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	for ( int i = 1 ; i <= n ; i++ )
	{
		long long k = i;
		long long k2;
		k2 = k*k;
		cout << k2*(k2-1)/2 - 4*((k-1)*(k-2)) << "\n";
	}
	
}
