#include <bits/stdc++.h>
using namespace std;

int n, m, cs = 1, t = 0;
char squares[102][102];
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};

void solve(){
    memset(squares, '.', sizeof squares);
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin>>squares[i][j];
        }
    }
    int cont;
    for(int i = 1; i <=n; ++i){
        for(int j = 1; j <=m; ++j){
            cont =0;
            if(squares[i][j]=='.'){
                for(int k = 0; k < 8; ++k){
                    if(squares[i+dy[k]][j+dx[k]]=='*')cont++;
                }
                squares[i][j]=cont+'0';
            }
        }
    }
    cout<<"Field #"<<cs++<<":\n";
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j<=m; ++j){
            cout<<squares[i][j];
        }
        cout<<'\n';
    }
}

int main(){
    while(cin>>n>>m, n||m){
        if(t++)cout<<'\n';
        solve();
    }
    return 0;
}
