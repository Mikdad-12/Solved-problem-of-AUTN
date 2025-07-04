#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    long long x;
    cin >> x;
    int cont=0;
    for(int i = 0; i<n; i++){
        if(a[i]==x){
            cout << i << endl;
            break;
        }
        else{
            cont++;
        }
    }
    if(cont>=n){
        cout << -1 << endl;
    }
    return 0;
}

