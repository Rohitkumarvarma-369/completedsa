#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int checker = n;
    int ans = 0;
    while(n){
        int temp = n%10;
        temp = pow(temp,3);
        n = n/10;

        ans = ans+temp;
    }

    if(ans==checker){
        cout<<"Yes, it is an Armstrong number";
    }
    else{
        cout<<"No, not an Armstrong number";
    }
}