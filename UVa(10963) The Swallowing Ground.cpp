/*==================================================
  Online Judge: UVa
  Problem No  : 10963
  Problem Name: The Swallowing Ground
  Author      : Md.Shah Arafat
  E-mail      : shaharafhat@gmail.com
  Date        : 14 / 5 / 2016
==================================================*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,W,Y1,Y2,I,J;
	cin >> T;
	while(T--)
	{
		cin >> W;
		cin >> Y1 >> Y2;
		J = 0;
		I = Y1 - Y2;
		for (int L = 1; L < W; ++L)
		{
			cin >> Y1 >> Y2;
			if((Y1 - Y2) != I)
			{
				J = 1;
			}
		}
		if (J)
		{
			cout << "no" << endl;
		}
		else
		{
			cout << "yes" << endl;
		}
		if(T)
		{
			cout << "\n";
		}
	}
	return 0;
}
