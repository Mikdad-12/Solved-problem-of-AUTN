#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long x=0,y=1;
    cout << 0 << " ";
    for(int i=1; i<n; i++){
       cout << y << " ";
       long long z=x+y;
       x = y;
       y = z;
    }
}
