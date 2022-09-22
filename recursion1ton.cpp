#include<bits/stdc++.h>
using namespace std;

int recur1ton(int n){
    if(n==1){
        cout<<n<<endl;
        return n;
    }

    int temp = recur1ton(n-1)+1;
    cout<<temp<<endl;
    return temp;
}

int main(){
    int n;
    cin>>n;
    recur1ton(n);
}