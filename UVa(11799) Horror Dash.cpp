#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int T,N,I,J,ARRY[105];
	cin >> T;
	for (I = 1; I <= T; ++I)
	{
		cin >> N;
		for (J = 0; J < N; ++J)
		{			
			cin >> ARRY[J];
			if (J > 0)
			{
				if (ARRY[J-1] > ARRY[J])
				{
					ARRY[J] = ARRY[J-1];
				}
			}
		}
		cout << "Case "<< I <<": "<< ARRY[N-1] << endl;
	}
	return 0;
}
