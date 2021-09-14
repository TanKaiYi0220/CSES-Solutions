#include <bits/stdc++.h>
using namespace std;
int main()
{
	string seq;
	cin >> seq;
	int ans = 0, c = 0;
	char l = 'A';
	for ( char s : seq )
	{
		if ( s == l )
		{
			c++;
			ans = (c>ans)?c:ans;
		}
		else
		{
			l = s;
			c = 1;
		}
	}
	cout << ans;
}
