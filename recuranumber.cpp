/*

Rohit Kumar Varma
Amrita Vishwa Vidyapeetham, Amritapuri

*/
#include<bits/stdc++.h>
using namespace std;

void recurnntimes(int a, int b){
    if(b==0){
        return;
    }
    cout<<a<<" ";
    recurnntimes(a, b-1);
}

int main(){

    int n;
    cin>>n;

    recurnntimes(n, n);

    return 0;
}
