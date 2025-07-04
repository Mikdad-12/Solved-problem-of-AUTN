#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int firstdigit=a/10;
    int seconddigit=a%10;
    if (seconddigit!=0)
    {
        if(firstdigit%seconddigit==0 || seconddigit%firstdigit==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else{
        cout << "YES" << endl;
    }
}

