#include <bits/stdc++.h>
using namespace std;
    
int King, Queen, Move;
    
void solve(){
    if(King==Queen)cout<<"Illegal state";
    else{
        int row = ceil((Queen+1)/8.0), col = Queen%8 + 1, mrow = ceil((Move+1)/8.0), mcol = Move%8 + 1;
        if(row != mrow && col != mcol )cout<<"Illegal move";
        else{
            int Krow = ceil((King+1)/8.0), Kcol = King%8 + 1;
            if(Move == Queen)cout<<"Illegal move";
            else if(row<Krow && col==Kcol && mrow>=Krow)cout<<"Illegal move";
            else if(row>Krow && col==Kcol && mrow<=Krow)cout<<"Illegal move";
            else if(col<Kcol && row == Krow && mcol>=Kcol)cout<< "Illegal move";
            else if(col>Kcol && row ==Krow && mcol<=Kcol)cout<<"Illegal move";
            else{
                int left = Kcol-1, right = Kcol+1, up = Krow - 1, down = Krow + 1;
                if((mrow == Krow && (mcol == left || mcol == right) )|| (mcol==Kcol && (mrow == up || mrow == down)))cout<<"Move not allowed";
                else{
                    Queen = Move;
                    if(King == 0 && Queen == 9|| King==56 && Queen == 49 || King==7 && Queen == 14 || King==63 && Queen == 54)cout<<"Stop";
                    else cout<<"Continue";
                }
            }
        }
    }
    cout<<'\n';
}

int main(){
    while(cin>>King>>Queen>>Move){
        solve();
    }
    return 0;
}