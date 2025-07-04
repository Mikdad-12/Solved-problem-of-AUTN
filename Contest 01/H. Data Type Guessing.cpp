#include <bits/stdc++.h>

using namespace std;

int main(){
    double n,k,a,d;
    cin >> n >> k >> a;
    d=(n*k)/a;
    long long m = (long long)d;
    if(d-m==0){
        if(d >= -2147483648 && d <= 2147483648){
            cout << "int" << endl;
        }
        else{
            cout << "long long" << endl;
        }
    }
    else{
        cout << "double" << endl;
    }
    return 0;
}
