/*

Rohit Kumar Varma
Amrita Vishwa Vidyapeetham, Amritapuri

*/
#include<bits/stdc++.h>
using namespace std;

vector<int> recurrevarr(vector<int> v, int a, int b){
    if(a<b){
        swap(v[a], v[b]);
        recurrevarr(v, a+1, b-1);
    }

    return v;
}

int main(){

    int n;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n;i++){
        int x;
        cin>>x;

        v.push_back(x);
    }

    v = recurrevarr(v,0,v.size()-1);

    for(auto i: v){
        cout<<i<<" ";
    }

    return 0;
}
