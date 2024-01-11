#include <bits/stdc++.h>
using namespace std;

char table[8][8];
bool board[8][8];
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
int knight[]={-1,1,-1,1};
int sign[]={-1,1};
string s;

bool valid(int x, int y){ return x>=0&&x<8&&y>=0&&y<8; }

void solve(){
    memset(table, '*', sizeof table);
    memset(board, 0, sizeof board);
    int row = 0,col = 0; 
    for(int i = 0; i < s.size(); ++i){
        col%=8;
        if(s[i]>'8'){
            table[row][col]=s[i];
            board[row][col]=1;
        }
        else col+= s[i]-'1';
        col++;
        if(s[i]=='/')row++,col=0;
    }
    char piece;
    int x, y;
    for(int i = 0; i < 8 ; ++i){
        for(int j = 0; j < 8; ++j){
            piece = table[i][j];
            if(piece != '*'){
                if(piece=='r'||piece=='R'||piece=='q'||piece=='Q'){
                    x = j+1;
                    while(valid(x,i)&&table[i][x]=='*'){
                        board[i][x]=1;
                        x++;
                    }
                    x = j-1;
                    while(valid(x,i)&&table[i][x]=='*'){
                        board[i][x]=1;
                        x--;
                    }
                    y = i+1;
                    while(valid(j,y)&&table[y][j]=='*'){
                        board[y][j]=1;
                        y++;
                    }
                    y = i-1;
                    while(valid(j,y)&&table[y][j]=='*'){
                        board[y][j]=1;
                        y--;
                    }
                }
                if(piece=='b'||piece=='B'||piece=='q'||piece=='Q'){
                    x = j+1, y = i+1;
                    while(valid(x,y)&&table[y][x]=='*'){
                        board[y][x]=1;
                        x++,y++;
                    }
                    x = j-1, y = i-1;
                    while(valid(x,y)&&table[y][x]=='*'){
                        board[y][x]=1;
                        x--,y--;
                    }
                    y = i+1, x = j-1;
                    while(valid(x,y)&&table[y][x]=='*'){
                        board[y][x]=1;
                        y++,x--;
                    }
                    y = i-1, x = j+1;
                    while(valid(x,y)&&table[y][x]=='*'){
                        board[y][x]=1;
                        y--, x++;
                    }
                }
                if(piece=='k'||piece=='K'){
                    for(int k = 0; k < 8; ++k){
                        if(valid(j+dx[k],i+dy[k]))board[i+dy[k]][j+dx[k]]=1;
                    }
                }
                if(piece=='n'||piece=='N'){
                    int a = 2, b = 1;
                    for(int k = 0; k < 4; ++k){
                        if(k==2)swap(a,b);
                        for(int w = 0; w < 2; ++w){
                            x = j+a*knight[k], y = i+b*sign[w];
                            if(valid(x,y))board[y][x]=1;
                        }
                    }
                }
                if(piece=='p'){
                    if(valid(j+1,i+1))board[i+1][j+1]=1;
                    if(valid(j-1,i+1))board[i+1][j-1]=1;
                }
                if(piece=='P'){
                    if(valid(j+1,i-1))board[i-1][j+1]=1;
                    if(valid(j-1,i-1))board[i-1][j-1]=1;
                }
            }
        }
    }
    int ans=0;
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j <8; ++j){
            if(!board[i][j])ans++;
        }
    }
    cout<<ans<<'\n';
}

int main(){
    while(cin>>s){
        solve();
    }
    return 0;
}