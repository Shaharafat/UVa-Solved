#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arry[100];
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> n;
        for(int j=0;j<n;j++)
        {
            cin >> arry[j];
        }
        sort(arry,arry+n);
        int round = (( arry[n-1] - arry[0] ) * 2);
        cout << round << endl;
    }
}
