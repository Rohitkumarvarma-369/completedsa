/*

Rohit Kumar Varma
Amrita Vishwa Vidyapeetham, Amritapuri

*/
#include<bits/stdc++.h>
using namespace std;

long long int recurfact(long long int n){
    if(n==1){
        return 1;
    }

    return n*(recurfact(n-1));
}

int main(){

    long long int n;
    cin>>n;

    cout<<recurfact(n);

    return 0;
}
