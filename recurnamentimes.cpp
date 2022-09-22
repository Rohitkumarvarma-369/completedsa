/*

Rohit Kumar Varma
Amrita Vishwa Vidyapeetham, Amritapuri

*/
#include<bits/stdc++.h>
using namespace std;

void recurname(int n, string s){
    if(n==0){
        return;
    }
    cout<<s<<endl;
    recurname(n-1,s);
}

int main(){

    int n;
    cin>>n;

    string s;
    cin>>s;

    recurname(n,s);

    return 0;
}
