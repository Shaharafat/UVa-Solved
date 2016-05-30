/*==================================================
  Online Judge: UVa
  Problem No  : 12503
  Problem Name: Robot Instruction
  Author      : Md.Shah Arafat
  E-mail      : shaharafhat@gmail.com
  Date        : 12 / 5 / 2016
==================================================*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	char ARRY[30];
	int T,N,I,J,STORE[105]={0};
	cin >> T;
	for (int K = 0; K < T; ++K)
	{
		I = 0;
		cin >> N;
		for (int L = 1; L <= N; ++L)
		{
			cin >> ARRY;
			if (strcmp(ARRY,"LEFT") == 0)
			{
				STORE[L] = -1;
				I--;
			}
			else if (strcmp(ARRY,"RIGHT") == 0)
			{
				STORE[L] = 1;
				I++;
			}
			else
			{
				cin >> ARRY >> J;
				I = I + STORE[J];
				STORE[L] = STORE[J];
			}
		}
		cout << I << endl;
	}
	return 0;
}
