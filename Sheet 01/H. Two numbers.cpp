#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    double c = (double)A / B;

    cout << "floor " << A << " / "
    <<
    B << " = " << floor(c) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(c) << endl;
    cout << "round " << A << " / " << B << " = " << round(c) << endl;

    return 0;
}
