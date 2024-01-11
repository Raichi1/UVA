#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int acum =0, ans = 0;
    for(int i = 0; i<s.size(); ++i){
        if(s[i]!='X')acum++;
        else ans+=((acum*(acum+1))/2), acum=0;
    }
    ans+=(acum*(acum+1)/2);
    cout<<ans<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}