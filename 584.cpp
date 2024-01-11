#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

string s, a, b;
int rep[10];

void solve(){
    memset(rep, 0, sizeof rep);
    vector<pair<int,int>> cont;
    istringstream ss(s);
    int i = 0;
    bool single = 0;
    while(ss>>a){
        if(a=="X"){
            cont.push_back({10,0});
            rep[i]=2;
        }else{
            if(!single){
                ss>>b;
                int ia = a[0]-'0', ib = ((b[0]=='/')?10-ia:b[0]-'0');
                cont.push_back({ia,ib});
                if(b[0]=='/'){
                    rep[i] = 1;
                    if(i==9)single=1;
                }
            }else{
                int ia = a[0]-'0';
                cont.push_back({ia,0});
            }
        }
        i++;
    }
    int ans = 0;
    for(int id = 0; id < 10; ++id){
        ans+=cont[id].f + cont[id].s;
        int j = id+1;
        while(rep[id]>0){
            ans+=cont[j].f;
            --rep[id];
            if(rep[id]>0 && cont[j].f!=10){
                ans+=cont[j].s;
                --rep[id];
            }
            j++;
        }
    }
    cout<<ans<<'\n';
}

int main(){
    while(getline(cin,s), s!="Game Over"){
        solve();
    }
    return 0;
}
