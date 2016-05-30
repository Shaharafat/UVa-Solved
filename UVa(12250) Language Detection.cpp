#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100],I,J;
	for (int i = 1; i <= 2000; ++i)
	{
		cin >> str;
		if(str[0] == '#')
			break;
		else if(( str[0] == 'H' ) && ( str[1] == 'E' ) && ( str[2] == 'L' ) && ( str[3] == 'L' ) && ( str[4] == 'O' ) && ( str[5] == '\0'))
			cout << "Case "<<i<<": ENGLISH" << endl;
		else if(( str[0] == 'H' ) && ( str[1] == 'O' ) && ( str[2] == 'L' ) && ( str[3] == 'A' ) && ( str[4] == '\0' ))
			cout <<  "Case "<<i<<": SPANISH" << endl;
		else if(( str[0] == 'H' ) && ( str[1] == 'A' ) && ( str[2] == 'L' ) && ( str[3] == 'L' ) && ( str[4] == 'O' ) && ( str[5] == '\0'))
			cout <<  "Case "<<i<<": GERMAN" << endl;
		else if(( str[0] == 'B' ) && ( str[1] == 'O' ) && ( str[2] == 'N' ) && ( str[3] == 'J' ) && ( str[4] == 'O' ) && ( str[5] == 'U' ) && ( str[6] == 'R' ) && ( str[7] == '\0' ))
			cout <<  "Case "<<i<<": FRENCH" << endl;
		else if(( str[0] == 'C' ) && ( str[1] == 'I' ) && ( str[2] == 'A' ) && ( str[3] == 'O' ) && ( str[4] == '\0' ))
			cout <<  "Case "<<i<<": ITALIAN" << endl;
		else if(( str[0] == 'Z' ) && ( str[1] == 'D' ) && ( str[2] == 'R' ) && ( str[3] == 'A' ) && ( str[4] == 'V' ) && ( str[5] == 'S') && ( str[6] == 'T') && ( str[7] == 'V') && ( str[8] == 'U') && ( str[9] == 'J') && ( str[10] == 'T') && ( str[11] == 'E') && ( str[12] == '\0'))
			cout <<  "Case "<<i<<": RUSSIAN" << endl;
		else
			cout <<  "Case "<<i<<": UNKNOWN" << endl;
	}
	return 0;
}
