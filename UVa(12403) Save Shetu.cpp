#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int K,count;
	int T;
	char str[10];
	cin >> T;
	count = 0;
	for (int i = 0; i < T; ++i)
	{
		cin >> str;
		if ( str[0] == 'd')
		{
			cin >> K;
			count = count + K;
		}
		else
		{
			cout << count << endl;
		}
	}
	return 0;
}
