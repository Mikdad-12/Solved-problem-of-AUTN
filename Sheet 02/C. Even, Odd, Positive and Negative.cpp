#include <bits/stdc++.h>
using namespace std;

int main(){
 long long a,N;
 cin >> a;
 long long even=0;
 long long odd=0;
 long long pos=0;
 long long neg=0;


 for(long long i=1; i<=a; i++){

    cin >> N;
    if(N%2==0){
        even++;
    }
    else{
        odd++;
    }
    if(N>0){
        pos++;
    }
    else if(N<0){
        neg++;
    }

 }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos <<endl;
    cout << "Negative: " << neg <<endl;
}
