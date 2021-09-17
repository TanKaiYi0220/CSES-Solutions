#include <bits/stdc++.h>
using namespace std;
int main()
{
	string seq;
	cin >> seq;
	string ans = "";
	int c[26] = {};
	for ( char s : seq ) c[s-'A']++;
	int odd = 0;
	for ( int i = 0 ; i < 26 ; i++ ) if ( c[i] & 1 ) odd++;
	if ( odd > 1 )
	{
		cout << "NO SOLUTION";
		return 0;
	}
	for ( int i = 0 ; i < 26 ; i++ )
	{
		if ( c[i] % 2 == 0 )
		{
			for ( int j = 0 ; j < c[i] ; j += 2 ) ans += char(i+'A');
		}
	}
	cout << ans;
	for ( int i = 0 ; i < 26 ; i++ )
	{
		if ( c[i] & 1 )
		{
			for ( int j = 0 ; j < c[i] ; j++ ) cout << char(i+'A');
		}
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
}
