#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    char tb[5][4*n+1];
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 4*n; ++j){
           cin>>tb[i][j];
        }
    }
    int contAskL, contAskR;
    for(int j = 1; j < 4*n; j+=4){
        contAskL=contAskR=0;
        for(int i = 0; i<5; ++i){
            if(tb[i][j-1]=='*')contAskL++;
            if(tb[i][j+1]=='*')contAskR++;
        }
        if(contAskR==contAskL)cout<<((contAskL)?2:1);
        else cout<<3;
    }
    cout<<'\n';
}

int main(){
    solve();
    return 0;
}
