#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0;
    while(n>0){
        int p = n%10;
        ans = (ans*10)+p;
        n = n/10;
    }
    cout<<ans<<endl;
}