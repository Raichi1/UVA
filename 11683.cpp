#include <bits/stdc++.h>
using namespace std;

int r,c;

void solve(){
    vector<int> v(c+1);
    cin>>v[0];
    int mn = v[0], ans = 0; 
    v[c]=r;
    for(int i = 1; i <c; ++i){
        cin>>v[i];
        if(mn>=v[i]){
            mn = v[i];
        }else{
            ans+=v[i]-mn;
            mn = v[i];
        }
    }
    if(v[c]>mn)ans+=v[c]-mn;
    cout<<ans<<'\n';
}

int main(){
    while(cin>>r, r){
        cin>>c;
        solve();
    }
    return 0;
}