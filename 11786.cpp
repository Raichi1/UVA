#include <bits/stdc++.h>
using namespace std;

int r,c;

void solve(){
    string s;
    cin>>s;
    stack<int>st;
    int ans = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i]=='\\')st.push(i);
        if(s[i]=='/'&&!st.empty()){
            ans+=(i-st.top());
            st.pop();
        }
    }
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