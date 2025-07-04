#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> v;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            long long vagfol = n / i;
            v.push_back(i);
            if (i != vagfol) {
                v.push_back(vagfol);
            }
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}
