/*

Rohit Kumar Varma
Amrita Vishwa Vidyapeetham, Amritapuri

*/
#include<bits/stdc++.h>
using namespace std;

void recurntoone(int n){
    if(n==0){
        return;
    }

    cout<<n<<" ";
    recurntoone(n-1);

}

int main(){

    int n;
    cin>>n;

    recurntoone(n);

    return 0;
}
