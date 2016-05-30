#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100 0];
	int len,T;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		cin >> str;
		len = strlen(str);
		if ( (len == 2) || (len == 1) )
		{
			cout << "+" << endl;
		}
		else if ( ( str[len-1] == '5' ) && ( str[len-2] == '3' ) )
		{
			cout << "-" << endl;
		}
		else if ( (str[0] == '9') && (str[len-1] == '4') )
		{
			cout << "*" << endl;
		}
		else
		{
			cout << "?" << endl;
		}
	}
	return 0;
}
