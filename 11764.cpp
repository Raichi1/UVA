#include <bits/stdc++.h>
using namespace std;

int i = 1;

void solve(){
    int n, f, lts, contU=0,contL=0;
    cin>>n;
    cin>>f;
    for(int i = 0; i < n-1; ++i){
        cin>>lts;
        if(f<lts)contU++;
        if(f>lts)contL++;
        f=lts;
    }
    cout<<"Case "<<i<<": "<<contU<<' '<<contL<<'\n';
    i++;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}