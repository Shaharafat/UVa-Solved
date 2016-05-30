/*==================================================
  Online Judge: UVa
  Problem No  : 12157
  Problem Name: Tariff Plan
  Author      : Md.Shah Arafat
  E-mail      : shaharafhat@gmail.com
  Date        : 12/5/2016
==================================================*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,N;
	float ARRY[22],O,P,I,J,Mile,Juice;
	cin >> T;
	for (int K = 1; K <= T; ++K)
	{
		cin >> N;
		I=J=0;
		for (int L = 0; L < N; ++L)
		{
			cin >> ARRY[L];
			if ((ARRY[L] / 29) == 1)
			{
				I++;
			}
			else
			{
				O = ARRY[L] - 29;
				I += ceil(O / 30);
				I++;
			}
			if ((ARRY[L] / 59) == 1)
			{
				J++;
			}
			else
			{
				P = ARRY[L] - 59;
				J += ceil(P / 60);
				J++;
			}
		}
		Mile = (int) I * 10;
		Juice = (int) J * 15;
		cout << "Case " << K << ": ";
		if (Juice > Mile)
		{
			cout << "Mile " << Mile << endl;
		}
		else if (Mile > Juice)
		{
			cout << "Juice " << Juice << endl;
		}
		else
		{
			cout << "Mile Juice " << Mile << endl;
		}
	}
	return 0;
}
