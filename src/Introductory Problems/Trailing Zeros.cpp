#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for ( int p5 = 5 ; p5 <= n ; p5 *= 5 ) ans += n / p5;
	cout << ans;
}
