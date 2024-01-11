#include <bits/stdc++.h>
using namespace std;

int i = 1;

void solve(){
    int n;
    while(cin>>n, n){
        int ans = 0,v;
        while(n--){
            cin>>v;
            (v)?ans++:ans--;
        }
        cout<<"Case "<<i<<": "<<ans<<'\n';
        ++i;
    }
}

int main(){
    solve();
    return 0;
}