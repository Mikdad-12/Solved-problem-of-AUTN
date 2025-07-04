#include <bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin >> n;
    int z = (int)n;
    if((n-z)==0){
        cout << "int " << z << endl;
    }
    else{
        cout << "float " << z << " " << n-z << endl;
    }
    return 0;
}
