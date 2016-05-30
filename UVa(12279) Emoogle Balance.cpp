#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N, arry[1200], K=1, suptrt, actrt, balance;
	while(K)
	{
		cin >> N;
		if (N == 0)
		{
			break;
		}
		suptrt = 0;
		actrt =0;
		for (int i = 0; i < N; ++i)
		{
			cin >> arry[i];
			if ( (arry[i] > 0) && (arry[i] < 100) )
			{
				suptrt++;
			}
			if ( arry[i] == 0 )
			{
				actrt++;
			}
		}
		balance = suptrt - actrt;
		cout << "Case "<< K <<": " << balance << endl;
		K++;
	}
	return 0;
}
