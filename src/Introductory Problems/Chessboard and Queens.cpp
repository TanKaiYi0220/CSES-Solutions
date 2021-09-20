#include <bits/stdc++.h>
using namespace std;
int main()
{
	string board[8];
	for ( int i = 0 ; i < 8 ; i++ ) cin >> board[i];
	int perm[8], ans = 0;
	bool bool_diagonal[16];
	for ( int i = 0 ; i < 8 ; i++ ) perm[i] = i;
	do
	{
		bool ok = 1;
		for ( int i = 0 ; i < 8 ; i++ ) if ( board[i][perm[i]] != '.' ) ok = 0;
		
		for ( int i = 0 ; i < 16 ; i++ ) bool_diagonal[i] = 0;
		for ( int i = 0 ; i < 8 ; i++ )
		{
			if ( bool_diagonal[i+perm[i]] ) ok = 0;
			bool_diagonal[i+perm[i]] = 1;
		}
		for ( int i = 0 ; i < 16 ; i++ ) bool_diagonal[i] = 0;
		for ( int i = 0 ; i < 8 ; i++ )
		{
			if ( bool_diagonal[i-perm[i]+7] ) ok = 0;
			bool_diagonal[i-perm[i]+7] = 1;
		}
		ans += ok;
	}while(next_permutation(perm, perm+8));
	cout << ans;
}
