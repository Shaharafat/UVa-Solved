#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,L,W,H;
	cin >> T;
	for (int i = 1; i <= T; ++i)
	{
		cin >> L >> W >> H;
		if ( (L <= 20) && (W <= 20) && (H <= 20) )
		{
			cout << "Case "<< i <<": " << "good" << endl;
		}
		else
			cout << "Case "<< i <<": " << "bad" << endl;
	}
	return 0;
}
