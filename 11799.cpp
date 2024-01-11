#include <bits/stdc++.h>
using namespace std;

int i = 1;

void solve(){
    string s;
    getline(cin,s);
    istringstream ss(s);
    string number;
    int ans = 0;
    while(ss>>number){
        ans=max(stoi(number),ans);
    }
    cout<<"Case "<<i<<": "<<ans<<'\n';
    ++i;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solve();
    }
    return 0;
}