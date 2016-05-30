#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int N;
    int i;
    while(1)
    {
        cin >> N;
        if( N == 0)
            break;
        if( (N %9) == 0 )
        {
            cout << "9" << endl;
        }
        else
        {
            cout << N % 9 << endl;
        }
    }
    return 0;
}
