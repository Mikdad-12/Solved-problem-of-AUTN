#include <bits/stdc++.h>
using namespace std;

int main(){
   char x,y;
   cin >> x;
   if(x>=65 && x<=90){
        y = (char)(x+32);
    cout << y << endl;
   }
   else if(x>=97 && x<=122){
     y = (char)(x-32);
    cout << y << endl;
   }
   return 0;
}
