#include <bits/stdc++.h>
using namespace std;

int i=1;

void solve(){
    int n = 10, prio;
    string wbs;
    map<int,vector<string>>mp;
    while(n--){
        cin>>wbs>>prio;
        mp[prio].push_back(wbs);
    }
    cout<<"Case #"<<i<<":\n";
    for(auto v: mp.rbegin()->second){
        cout<<v<<'\n';
    }
    ++i;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}