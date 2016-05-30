/*=================================================================================
  Online Judge: UVa
  Problem No  : 119
  Problem Name: Greedy Gift Givers
  Author      : Md.Shah Arafat
  E-mail      : shaharafhat@gmail.com
  City        : Chittagong-Bangladesh
  ID          : shaharafat (Uva / Hackerrank / Lightoj / codeforces / spoj)
  Date        : 20 / 5 / 2016
===================================================================================*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,TK,PERSON,RECEIVE,GIVES,CONDITION = 0;
	char NAME[15][15],GETPERSON[15];
	while(cin >> T)
	{
		int DATA[15][4] = {0};
		if (CONDITION)
		{
			cout << endl;
		}
		for (int I = 0; I < T; ++I)
		{
			cin >> NAME[I];
		}
		for (int L = 0; L < T; ++L)
		{
			cin >> GETPERSON;
			cin >> TK >> PERSON;
			if (PERSON == 0)
			{
				continue;
			}
			if ((TK % PERSON) == 0)	
			{
				GIVES = TK;
			}
			else{
				while(1)
				{
					TK--;
					if ((TK % PERSON) == 0)	
					{
						GIVES = TK;
						break;
					}
				}	
			}
			RECEIVE = GIVES / PERSON;
			for (int K = 0; K < T; ++K)
			{
				if (strcmp(NAME[K],GETPERSON) == 0)
				{
					DATA[K][0] = GIVES;
				}
			}
			for (int K = 0; K < PERSON; ++K)
			{
				cin >> GETPERSON;
				for (int M = 0; M < T; ++M)
				{
					if (strcmp(NAME[M],GETPERSON) == 0)
					{
						DATA[M][1] += RECEIVE;
					}
				}
			}
		}
		for (int K = 0; K < T; ++K)
		{
			cout << NAME[K] << " " << DATA[K][1] - DATA[K][0] << endl;
		}
		CONDITION = 1;
	}
	return 0;
}