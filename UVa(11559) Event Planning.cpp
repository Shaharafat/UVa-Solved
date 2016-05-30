#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arry[50],H,P,N,W,S,I;
	long int B,cost;
	while(cin >> N >> B >> H >> W)
	{
		cost = 0;
		S = 0;
		while(H--)
		{
			cin >> P;
			for (I = 0; I < W; ++I)
			{
				cin >> arry[I];
			}
			for (I = 0; I < W; ++I)
			{
				if (arry[I] == 0)
				{
					break;
				}
			}
			if (I == W)
			{
				if(S == 0)
				{
					S = P;
					cost = P * N;
				}
				if (S > P)
				{
					S = P;
					cost = P * N;
				}
			}
		}
		if (cost > B)
		{
			cout << "stay home" << endl;
		}
		else if (cost == 0)
		{
			cout << "stay home" << endl;
		}
		else
		{
			cout << cost << endl;
		}
	}
	return 0;
}
