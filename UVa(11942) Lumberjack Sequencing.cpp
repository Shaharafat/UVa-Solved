#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,ARRY[12],AS,DS;
	cin >> T;
	cout << "Lumberjacks:" << endl;
	for (int i = 0; i < T; ++i)
	{
		AS = DS = 1;
		for (int I = 0; I < 10; ++I)
		{
			cin >> ARRY[I];
			if (I > 0)
			{
				if (ARRY[I-1] < ARRY[I])
				{
					AS++;
				}
				else if (ARRY[I-1] > ARRY[I])
				{
					DS++;
				}
				else
				{
					continue;
				}
			}
		}
		if ((AS == 10) || (DS == 10))
		{
			cout << "Ordered" << endl;
		}
		else
		{
			cout << "Unordered" << endl;
		}
	}
	return 0;
}
