#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,f,s,t;
    cin >> a >> b >> c;
    if (a>=b && a>=c)
    {
        f = a;
        if (b>=c)
        {
            s = b;
            t = c;
        }
        else
        {
            s = c;
            t = b;
        }
    }
    else if(b>=a && b>=c)
    {
        f = b;
        if (a>=c)
        {
            s = a;
            t = c;
        }
        else
        {
            s = c;
            t = a;
        }
    }
    else if(c>=a && c>=b)
    {
        f = c;
        if (a>=b)
        {
            s = a;
            t = b;
        }
        else
        {
            s = b;
            t = a;
        }

    }
    cout << t << endl << s << endl << f << endl << endl;
    cout << a << endl << b << endl << c << endl;
}
