#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,reversed_number=0;
    cin >> n;
    long long a=n;
     while(n != 0) {
    long long digit = n % 10;
    reversed_number = reversed_number * 10 + digit;
    n /= 10;
  }
  cout << reversed_number << endl;
   if(reversed_number==a){
       cout << "YES" << endl;
   }
   else{
    cout << "NO" << endl;
   }
}
