#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long multi = (a%100)*(b%100)*(c%100)*(d%100);
    cout << multi%100 << endl;
    return 0;
}

