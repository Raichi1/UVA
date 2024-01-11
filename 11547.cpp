#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int ans = (((n*567)/9+7492)*235)/47-498;
    cout<<abs((ans%100)/10)<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
