#include <bits/stdc++.h>
using namespace std;

int n,i,j;

void solve(){
    int ans = 0;
    while(i!=j){
        i=(i+1)/2;
        j=(j+1)/2;
        ans++;
    }
    cout<<ans<<'\n';
}

int main(){
    while(cin>>n>>i>>j){
        solve();
    }
    return 0;
}