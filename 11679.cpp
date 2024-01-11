#include <bits/stdc++.h>
using namespace std;

int b,n;

void solve(){
    vector<int> r(b+1);
    for(int i = 1; i<=b; ++i)cin>>r[i];
    int d, ac, ob;
    while(n--){
        cin>>d>>ac>>ob;
        r[ac]+=ob;
        r[d]-=ob;
    }
    bool valid = 1;
    for(auto e: r)if(e<0){valid = 0; break;}
    cout<<((valid)?'S':'N')<<'\n';
}

int main(){
    while(cin>>b>>n, n&&b){
        solve();
    }
    return 0;
}