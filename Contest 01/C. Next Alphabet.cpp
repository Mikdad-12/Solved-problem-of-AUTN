#include <bits/stdc++.h>

using namespace std;

int main(){
    char c;
    cin >> c;
    if(c>=97 && c<122){
        cout << (char)(c+1) << endl;
    }
    else if(c==122){
        cout << "a" << endl;
    }
    return 0;
}
