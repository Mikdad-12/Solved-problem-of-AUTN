#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin >> n >> m)
    {
        int sum = 0;
        if(n<=0 || m<=0)
        {
            break;
        }
        else
        {
            for(int i=min(n,m); i<=max(n,m); i++)
            {
                cout << i << " ";
                sum = sum + i;
            }
            cout << "sum" << "  =" << sum << endl;
        }
    }
}
