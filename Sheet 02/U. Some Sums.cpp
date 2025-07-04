#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum=0;
    cin >> n >> a >> b;
    for(int i=1; i<=n; i++)
    {
        int k = i;
        int digit_sum=0;
        while(k!=0)
        {
            int v = k%10;
            digit_sum = digit_sum + v;
            k = k/10;
        }
        if(digit_sum<=b && digit_sum>=a)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;
}
