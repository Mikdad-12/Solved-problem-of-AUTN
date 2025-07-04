#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        vector <long long> reminder;
        while(n!=0){
            long long a = n%2;
            if(a==1){
            reminder.push_back(a);
            }
            n = n/2;
        }
        long long result = 0;
        for (int i = 0; i < reminder.size(); i++)
        {
            result = result + (reminder[i]*(pow(2,i)));
        }
        cout << result << endl;
    }
}
