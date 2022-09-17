#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long int ans = 0;
    while(n){
        int digit = n%10;
        if ((ans > 0 && ans > (INT_MAX - digit)/10) | (ans < 0 && ans < (INT_MIN - digit)/10)) return 0;
        ans = (ans*10)+(digit);
        n = n/10;
    }
    cout<<ans;
}