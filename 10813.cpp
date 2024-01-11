#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

map<int, pair<int, int>> mp;
map<int,int> diag;
int rows[5], cols[5];

bool BINGO(){
    for(int i = 0; i < 5; ++i){
        if(rows[i]==5)return 1;
        if(cols[i]==5)return 1;
    }
    if(diag[0]==5 || diag[4]==5)return 1;
    return 0;
}

void solve(){
    memset(rows, 0, sizeof rows);
    memset(cols, 0, sizeof cols);
    mp.clear();
    diag[0]=1,diag[4]=1, rows[2]=1, cols[2]=1;
    int val;
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j< 5; ++j){
            if(i==2 && j == 2)continue;
            cin>>val;
            mp[val]={i,j};
        }
    }
    int bng;
    bool bingo = 0;
    for(int i = 0; i < 75; ++i){
        cin>>bng;
        if(mp.count(bng)){
            int r = mp[bng].f, c = mp[bng].s;
            rows[r]++;
            cols[c]++;
            if(diag.count(r+c))diag[r+c]++;
            else if(diag.count(r-c))diag[r-c]++;
        }
        if(BINGO() && !bingo){
            cout<<"BINGO after "<<i+1<<" numbers announced\n";
            bingo=1;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}