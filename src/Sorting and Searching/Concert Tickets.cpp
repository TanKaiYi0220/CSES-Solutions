#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	set<array<int, 2>> s;
	for ( int i = 0 ; i < n ; i++ )
	{
		int a;
		cin >> a;
		s.insert({a, i});
	}
	while(m--)
	{
		int c;
		cin >> c;
		auto it = s.lower_bound({c+1, 0});
		if ( it == s.begin() ) cout << -1 << "\n";
		else
		{
			--it;
			cout << (*it)[0] << "\n";
			s.erase(it);
		}
	}
}
