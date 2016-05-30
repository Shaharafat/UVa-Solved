/*==================================================
  Online Judge: UVa
  Problem No  : 12468
  Problem Name: Zapping
  Author      : Md.Shah Arafat
  E-mail      : shaharafhat@gmail.com
  Date        : 12 / 5 / 2016
==================================================*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A,B,SUB1,SUB2;
	for (int I = 0; I < 200; ++I)
	{
		cin >> A >> B;
		if ((A == -1) && (B == -1))
		{
			break;
		}
		if (A > B)
		{
			swap(A,B);
		}
		SUB1 = B - A;
		SUB2 = A - B;
		if (SUB2 < 0)
		{
			SUB2 = ((100 - B) + A);
		}
		if (SUB1 < SUB2)
		{
			cout << SUB1 << endl;
		}
		else
		{
			cout << SUB2 << endl;
		}
	}
	return 0;
}
