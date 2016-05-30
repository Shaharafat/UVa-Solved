#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,sum,l,n,k,m;
    while(cin >> l)
    {
        for(m = 1; m <= l;m++)
        {
            sum = 0;
            cin >> k;
            for(n = 1; n <= k; n++)
            {
                cin >> a >> b >> c;
                sum = sum + (a*c);
            }
            cout << sum;
        }
    }
    return 0;
}
