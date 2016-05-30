#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int T,N,ARRY[60],HJ,LJ;
	cin >> T;
	for (int J = 1; J <= T; ++J)
	{
		cin >> N;
		LJ = HJ = 0;
		for (int K = 0; K < N; ++K)
		{
			cin >> ARRY[K];
			if (K > 0)	
			{
				if (ARRY[K-1] < ARRY[K])
				{
					HJ++;
				}
				else if (ARRY[K-1] > ARRY[K])
				{
					LJ++;
				}
				else
				{
					continue;
				}
			}
		}
		cout << "Case " << J << ": "<< HJ << " " << LJ << endl;
	}

	return 0;
}
