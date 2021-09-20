#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long pow10[17] = {1};
	long long block[17] = {0};
	for ( int i = 1 ; i < 17 ; i++ )
	{
		pow10[i] = pow10[i-1]*10;
		block[i] = pow10[i-1]*9*i;
	}
	int q;
	cin >> q;
	while(q--)
	{
		long long k;
		cin >> k;
		long long digits = -1;
		for ( int i = 0 ; i < 17 ; i++ )
		{
			if ( k <= block[i] )
			{
				digits = i;
				break;
			}
			k -= block[i];
		}
		if ( digits == -1 ) digits = 17;
		k--;
		long long idx = k % digits;
		long long val = k / digits;
		long long actual_val = pow10[digits-1] + val;
		string ans = to_string(actual_val);
		cout << ans[idx] << "\n";
	}
}
