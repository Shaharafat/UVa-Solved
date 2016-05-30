#include<bits/stdc++.h>
using namespace std;
int main()
{
	int B,N,R[30],D,C,V,I;
	while(cin >> B >> N)
	{
		if ((B == 0) && (N == 0))
		{
			break;
		}
		for (I = 1; I <= B; ++I)
		{
			cin >> R[I];
		}
		for (I = 1; I <= N; ++I)
		{
			cin >> D >> C >> V;
			R[D] -= V;
			R[C] += V;
		}
		bool BIT = true;
		for (I = 1; I <= B; ++I)
		{
			if (R[I] < 0)
			{
				BIT = false;
				break;
			}
		}
		if(BIT)
		{
			cout << "S" << endl;
		}
		else
		{
			cout << "N" << endl;
		}
	}
	return 0;
}
