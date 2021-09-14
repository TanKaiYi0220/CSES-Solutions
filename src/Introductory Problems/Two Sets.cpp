#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long sum = n*(n+1)/2;
	if ( sum&1 )
	{
		cout << "NO";
		return 0;
	}
	sum /= 2;
	cout << "YES\n";
	vector<int> left;
	vector<int> right;
	for ( int i = n ; i >= 1 ; i-- )
	{
		if ( sum >= i )
		{
			sum -= i;
			left.push_back(i);
		}
		else
		{
			right.push_back(i);
		}
	}
	cout << left.size() << "\n";
	for ( auto l : left ) cout << l << " ";
	cout << "\n" << right.size() << "\n";
	for ( auto r : right ) cout << r << " ";
}
