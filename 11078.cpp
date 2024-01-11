#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    cin>>v[0];
    int mx = v[0], ans = INT_MIN;
    for(int i = 1; i < n; ++i){
        cin>>v[i];
        ans = max(ans,mx-v[i]);
        mx=max(mx,v[i]);
    }
    cout<<ans<<'\n';
}

int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}