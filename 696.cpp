#include <bits/stdc++.h>
using namespace std;
    
int row,col;
    
void solve(){
    if(row == 0 || col == 0)cout<<0;
    else {
        if(row == 1 || col == 1) cout<<max(row,col);
        else{
            if(row==2 && col >= 2 || col==2 && row>=2){
                if(row==col)cout<<col*row;
                else {
                    int mx = max(col,row), res = mx%2, sect = mx/2;
                    sect = ceil(sect/2.0);
                    cout<<sect*4+(((mx-1)%4==0)?res*2:0);
                }
            }
            else{
                int rf1 = ceil(row/2.0), rf2 = row/2, cf1 = ceil(col/2.0), cf2 = col/2;
                cout<<rf1*cf1+rf2*cf2;
            }
        }
    }
    cout<<" knights may be placed on a "<<row<<" row "<<col<<" column board.\n";
}

int main(){
    while(cin>>row>>col, row ||col){
        solve();
    }
    return 0;
}