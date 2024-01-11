#include <bits/stdc++.h>
using namespace std;

int a, b, c, t;
map<int,int> snakes;

void solve(){
    cin>>a>>b>>c;
    snakes.clear();
    vector<int> v(a,1);
    int m, tl;
    while(b--){
        cin>>m>>tl;
        snakes[m]=tl;
    }
    int roll, turn;
    bool ignore = 0;
    for(int i = 0; i < c; ++i){
        cin>>roll;
        if(!ignore && v.size()>0){
            turn = i%a;
            v[turn]+=roll;
            if(snakes.count(v[turn]))v[turn]=snakes[v[turn]];
            if(v[turn]>=100){
                v[turn]=100;
                ignore=1;
            }
        }
    }
    for(int i = 0; i < v.size(); ++i){
        cout<<"Position of player "<<i+1<<" is "<<v[i]<<".\n";
    }
}

int main(){
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}