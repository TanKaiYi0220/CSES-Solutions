#include <bits/stdc++.h>
using namespace std;
void solve(int num, char src, char aux, char des)
{
	if ( num == 0 ) return;
	solve(num-1, src, des, aux);
	cout << src << " " << des << "\n";
	solve(num-1, aux, src, des);
}
int main()
{
	int n;
	cin >> n;
	cout << (1<<n)-1 << "\n";
	solve(n, '1', '2', '3');
}
