#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int T,n,m,j,k,l;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		cin >> n >> m;
		j = n / 3;
		k = m / 3;
		l = j * k;
		cout << l << endl;
	}
	return 0;
}
