#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    cin >> a;
    long long row = a/4;
    long long col;
    if(row%2==0){
        col = a%4;
    }
    else{
        col = 3 - (a%4);
    }
    cout << row << " " << col << endl;
    return 0;
}
