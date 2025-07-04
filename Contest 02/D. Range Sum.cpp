#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    long long a,b;
    for(int i=0; i<t; i++){
        cin >> a >> b;
        long long m = max(a,b);
        long long n = min(a,b);
        long long sum;
        sum = ((m-n+1)*(m+n))/2;
        cout << sum << endl;
    }
}
