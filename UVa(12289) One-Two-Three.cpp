#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[10];
	int T;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		cin >> str;
		int len = strlen(str);
		if ((len == 3) && (((str[0] == 'o') && (str[1] == 'n')) || ((str[1] == 'n') && (str[2] == 'e')) || ((str[0] == 'o') && (str[2] == 'e'))))
			cout << "1" << endl;
		else if ((len == 3) && ((str[0] == 't') && (str[1] == 'w')) || ((str[1] == 'w') && (str[2] == 'o')) || ((str[0] == 't') && (str[2] == 'o')))
			cout << "2" << endl;
		else
			{
				if(len == 5)
					cout << "3" << endl;
			}
	}
	return 0;
}
