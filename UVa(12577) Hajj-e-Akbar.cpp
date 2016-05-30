#include<bits/stdc++.h>
using namespace std;
int I=1;
int main(int argc, char const *argv[])
{
	char str[10];
	while(I)
	{
		cin >> str;
		if ( str[0] == '*' )
		{
			break;
		}
		else if ( str[0] == 'H')
		{
			cout << "Case "<< I <<": Hajj-e-Akbar" << endl;
		}
		else
		{
			cout << "Case "<< I <<": Hajj-e-Asghar" << endl;
		}
		I++;
	}
	return 0;
}
