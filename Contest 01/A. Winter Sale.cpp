#include <bits/stdc++.h>

using namespace std;

int main(){
    double x,p;
    cin >> x >> p;
    double mp=100-x;
    cout << fixed << setprecision(2) << (100*p)/mp << endl;
    return 0;
}
