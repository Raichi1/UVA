#include <bits/stdc++.h>
using namespace std;

int n,b,h,w;

void solve(){
    int price, beds, mn = INT_MAX;
    bool vld;
    for(int i = 0; i < h; ++i){
        cin>>price;
        vld=0;
        for(int j = 0; j <w; ++j){
            cin>>beds;
            if(beds>=n)vld=1;
        }
        if(vld && b>=price*n)mn=min(mn,price*n);
    }
    if(mn==INT_MAX)cout<<"stay home";
    else cout<<mn;
    cout<<'\n';
}

int main(){
    while(cin>>n>>b>>h>>w){
        solve();
    }
    return 0;
}