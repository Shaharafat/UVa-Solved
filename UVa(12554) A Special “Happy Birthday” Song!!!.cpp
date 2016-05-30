/*==================================================
  Online Judge: UVa
  Problem No  : 12554
  Problem Name: A Special “Happy Birthday” Song!!!
  Author      : Md.Shah Arafat
  E-mail      : shaharafhat@gmail.com
  Date        : 13 / 5 / 2016
==================================================*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	char NAME[102][102],SONG[16][10] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
	float N;
	int I,J,O,P;
	while(cin >> N)
	{
		for (int L = 0; L < N; ++L)
		{
			cin >> NAME[L];
		}
		I = ceil(N / 16);
		J = I * 16;
		O = P = 0;
		for (int M = 0; M < J; ++M)
		{
			cout << NAME[O] << ": " << SONG[P] << endl;
			O++;
			P++;
			if (O > N-1)
			{
				O = 0;
			}
			if (P > 15)
			{
				P = 0;
			}
		}
	}	
	return 0;
}