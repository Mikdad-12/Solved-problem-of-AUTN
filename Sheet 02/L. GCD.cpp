#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    cin >> a >> b;
    long long maxx = max(a,b);
    long long minn = min(a,b);
    long long rem;
    while(minn!=0){
        rem=maxx%minn;
        maxx=minn;
        minn=rem;
    }
    cout << maxx << endl;
}


