#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,M,K;
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
    	cin >> N;
    	K = ( ( ( ( ( ( N * 567 ) /9 ) + 7492 ) * 235 ) / 47 ) - 498 );
    	M = K % 100;
    	M = M / 10;
    	M = abs(M);
    	cout << M << endl;
    }
    return 0;
}
