#include <bits/stdc++.h>
using namespace std;

int a ,b;

void solve(){
    int val, contA = 0, contB = 0;
    set<int> stA, stB;
    for(int i = 0; i < a; ++i){
        cin>>val;
        stA.insert(val);
    }
    for(int i = 0; i < b; ++i){
        cin>>val;
        stB.insert(val);
    }
    for(int i : stA){
        if(stB.count(i)==0)contA++;
    }
    for(int i : stB){
        if(stA.count(i)==0)contB++;
    }
    int ans = min(contA,contB);
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    while(cin>>a>>b, a||b){
        solve();
    }
    return 0;
}