#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arry[10],T;
    cin >> T;
    for (int J = 0; J < T; ++J)
    {
	    for (int i = 0; i < 3; ++i)
	   	{
	   		cin >> arry[i];
	   	}
	   	sort( arry , arry + 3 );
	   	cout << "Case "<< J+1 <<": " << arry[2] << endl;
    }
    return 0;
}
