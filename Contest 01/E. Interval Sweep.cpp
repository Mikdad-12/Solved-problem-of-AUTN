#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    if(a>=b && a!=0 && b!=0)
    {
        if(a-1==b || a==b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if(b>=a && a!=0 && b!=0)
    {
        if(b-1==a || b==a)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
        {
            cout << "NO" << endl;
        }
}
