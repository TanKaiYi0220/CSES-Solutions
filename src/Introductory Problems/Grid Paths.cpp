#include <bits/stdc++.h>
using namespace std;
string path;
bool visited[7][7];
int ans = 0;

bool valid_to_turn(int i, int j)
{
	return i >= 0 && i < 7 && j >= 0 && j < 7 && !visited[i][j];
}

void dfs(int i, int j, int m)
{ 
	if ( i == 6 && j == 0 )
	{
		if ( m == 48 ) ans++;
		return;
	}
	
	visited[i][j] = 1;
	
	if ( path[m] == '?' || path[m] == 'L' )
	{
		if ( j > 0 && !visited[i][j-1] )
		{
			if (valid_to_turn(i, j-2) || !valid_to_turn(i+1, j-1) || !valid_to_turn(i-1, j-1))
			{
				dfs(i, j-1, m+1);
			}
		}
	}
	
	if ( path[m] == '?' || path[m] == 'R' )
	{
		if ( j < 6 && !visited[i][j+1] )
		{
			if (valid_to_turn(i, j+2) || !valid_to_turn(i+1, j+1) || !valid_to_turn(i-1, j+1))
			{
				dfs(i, j+1, m+1);
			}
		}
	}
	
	if ( path[m] == '?' || path[m] == 'U' )
	{
		if ( i > 0 && !visited[i-1][j] )
		{
			if (valid_to_turn(i-2, j) || !valid_to_turn(i-1, j-1) || !valid_to_turn(i-1, j+1))
			{
				dfs(i-1, j, m+1);
			}
		}
	}
	
	if ( path[m] == '?' || path[m] == 'D' )
	{
		if ( i < 6 && !visited[i+1][j] )
		{
			if (valid_to_turn(i+2, j) || !valid_to_turn(i+1, j-1) || !valid_to_turn(i+1, j+1))
			{
				dfs(i+1, j, m+1);
			}
		}
	}
	
	visited[i][j] = 0;
}


int main()
{
	cin >> path;
	dfs(0, 0, 0);
	cout << ans;
}
