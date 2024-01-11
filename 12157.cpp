#include <bits/stdc++.h>
using namespace std;

int i = 0;

void solve(){
    int n, call;
    cin>>n;
    int ans, mile=0, juice=0;
    for(int i = 0; i < n; ++i){
        cin>>call;
        mile+=((call/30)+1)*10;
        juice+=((call/60)+1)*15;
    }
    ans = min(mile,juice);
    cout<<"Case "<<++i<<": ";
    cout<<((mile<juice)?"Mile ":(mile==juice)?"Mile Juice ":"Juice ")<<ans<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}