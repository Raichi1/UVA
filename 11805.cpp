#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,p,i=1;
    cin>>t;
    while(t--){
        cin>>n>>k>>p;
        int ans = k+(p%n);
        cout<<"Case "<<i++<<": "<<((ans==n)?n:ans%n)<<'\n';
    }
    return 0;
}