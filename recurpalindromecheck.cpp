/*

Rohit Kumar Varma
Amrita Vishwa Vidyapeetham, Amritapuri

*/
#include<bits/stdc++.h>
using namespace std;

bool recurpalindrom(string s, int a, int b){

    if(a==b){
        return true;
    }
    
    if(s[a]!=s[b]){
        return false;
    }

    if(a<b+1){
        return (recurpalindrom(s,a+1,b-1));
    }

    return true;

}

int main(){

    string s;
    cin>>s;
    cout<<recurpalindrom(s,0,s.length()-1);

    return 0;
}
