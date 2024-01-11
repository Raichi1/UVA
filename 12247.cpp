#include <bits/stdc++.h>
using namespace std;

bool cards[53];
vector<int> p(3), v(2);

void solve(){
    memset(cards,0, sizeof cards);
    cards[p[0]]=cards[p[1]]=cards[p[2]]=cards[v[0]]=cards[v[1]]=1;
    sort(p.begin(),p.end());
    sort(v.begin(), v.end());
    if(p[2]>v[0]&&p[1]>v[1] || p[2]>v[1]&&p[1]>v[0]) cout<<-1;
    else{
        int ans = -1;
        if(v[0]>p[2]){
            for(int i = 1; i <= 52; ++i){
                if(!cards[i]){ 
                    ans = i; 
                    break; 
                }
            }
        }else{ 
            if(v[0]>p[1]) {
                for(int i = p[1]; i<=52; ++i){
                    if(!cards[i]){ans = i; break; }
                }
            }
            else{
                if(v[1]>p[2]){
                    for(int i = p[2]; i <=52; ++i){
                        if(!cards[i]){ ans = i; break; }
                    }
                }
            }
        }
        cout<<ans;
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    while(cin>>p[0]>>p[1]>>p[2]>>v[0]>>v[1], p[0]){
        solve();
    }
    return 0;
}