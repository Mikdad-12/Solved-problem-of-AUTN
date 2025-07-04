#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin >> x;
    long long cont=0;
    if(x!=2){
    for(long long i=2; i<=(sqrt(x)+1); i++){
        if(x%i==0){
            cont++;
        }
    }
    if(cont>0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    }
    else{
        cout << "YES" << endl;
    }
}
