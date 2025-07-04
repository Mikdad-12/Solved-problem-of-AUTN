#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int f = x-(x%1000);
    int j = f/1000;
    if (j%2==0){
        cout << "EVEN" << endl;
    }
    else{
        cout << "ODD" << endl;
    }
    return 0;
}
