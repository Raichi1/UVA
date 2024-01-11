#include <bits/stdc++.h>
using namespace std;
    
void solve(){
    int r, c;
    char piece;
    cin>>piece>>r>>c;
    if(piece=='r'||piece=='Q')cout<<min(r,c);
    else{
        if(piece=='k'){
            int rf1 = ceil(r/2.0), rf2 = r/2, cf1 = ceil(c/2.0), cf2 = c/2;
            cout<<rf1*cf1+rf2*cf2;
        }
        else{
            int rf = ceil(r/2.0), cf=ceil(c/2.0);
            cout<<rf*cf;
        }
    }
    cout<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}