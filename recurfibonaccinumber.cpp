/*

Rohit Kumar Varma
Amrita Vishwa Vidyapeetham, Amritapuri

*/
#include<bits/stdc++.h>
using namespace std;

int recurfibonacciuptonum(int n){
    if(n==0 || n==1){
        return n;
    }

    if(n>1){
        return recurfibonacciuptonum(n-2)+recurfibonacciuptonum(n-1);
    }
}

int main(){

    int n;
    cin>>n;
    int i=0;
    while(i<n){
        cout<<recurfibonacciuptonum(i)<<" ";
        i++;
    }

    return 0;
}
