#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans =0;
    cin>>n;
    while(n--){
        double l,w,d,p;
        cin>>l>>w>>d>>p;
        double sum = l+w+d;
        if((sum<=125 || l<=56 && w<=45 && d<=25) && p<=7){
            cout<<1;
            ans++;
        }else cout<<0;
        cout<<'\n';
    }
    cout<<ans<<'\n';
}

int main(){
    solve();
    return 0;
}
