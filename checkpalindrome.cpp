#include<bits/stdc++.h>
using namespace std;

int reverse_num(int n){
    int ans = 0;

    while(n){
        int temp = n%10;
        n = n/10;
        ans = (ans*10)+temp;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int rev_num = reverse_num(n);
    if(rev_num==n){
        cout<<"Yes, the number is a palindrome";
    }
    else{
        cout<<"No, the number is not a palindrome";
    }
}