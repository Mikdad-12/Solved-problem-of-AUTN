#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,n;
    cin >> a;
    vector<long long>maxx;
    for(long long i=0; i<a; i++){
        cin >> n;
        long long cont=0;
        while(n%2==0){
            cont++;
            n = n/2;
        }
        maxx.push_back(cont);
    }
    sort(maxx.begin(),maxx.end());
    cout << maxx.back() << endl; //back() print the last element of vector
}
