#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a[n],sum=0;
    for(long long i=0; i<n; i++){
        cin >> a[i];
        sum = sum + a[i];
    }
    if (sum>=0){
        cout << sum << endl;
    }
    else{
        cout << sum*-1 << endl;
    }
    return 0;
}


