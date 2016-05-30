#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    int c;
    cin >> c;                      //Test Case Number
    for(int i=1;i<=c;i++)
    {
        cin >> a >> b;
        if(a>b)
            cout << ">" << endl;
        else if (a<b)
            cout << "<" <<endl;
        else
            cout << "=" <<endl;
    }
    return 0;
}
