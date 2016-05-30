/*==================================================
  Online Judge: UVa
  Problem No  : 12015
  Problem Name: Google is Feeling Lucky
  Author      : Md.Shah Arafat
  E-mail      : shaharafhat@gmail.com
  Date        : 5 / 13 / 2016
==================================================*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,I,J,K,LARGE,STORE[10]={0};
	char URL[10][102];
	cin >> T;
	for (int N = 1; N <= T; ++N)
	{
		LARGE = 0;
		for (int L = 0; L < 10; ++L)
		{
			cin >> URL[L] >> STORE[L];
			if (LARGE < STORE[L])
			{
				LARGE = STORE[L];
			}
		}
		cout << "Case #" << N << ":"<< endl;
		for (int L = 0; L < 10; ++L)
		{
			if (STORE[L] == LARGE)
			{
				cout << URL[L] << endl;
			}
		}
	}
	return 0;
}
