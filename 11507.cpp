#include <bits/stdc++.h>
using namespace std;

int n;

void solve(){
    string s, dir = "+x";
    for(int i = 1; i <n; ++i){
        cin>>s;
        if(s=="No")continue;
        char sign;
        if(s=="+y"){
            if(dir=="+x")dir="+y";
            else if(dir=="-x")dir="-y";
            else if(dir=="+y")dir="-x";
            else if(dir=="-y")dir="+x";
        }else{
            if(s=="-y"){
                if(dir=="+x")dir="-y";
                else if(dir=="-x")dir="+y";
                else if(dir=="+y")dir="+x";
                else if(dir=="-y")dir="-x";
            }
            else{
                if(s=="+z"){
                    if(dir=="+x")dir="+z";
                    else if(dir=="-x")dir="-z";
                    else if(dir=="+z")dir="-x";
                    else if(dir=="-z")dir="+x";
                }
                else{
                    if(s=="-z"){
                        if(dir=="+x")dir="-z";
                        else if(dir=="-x")dir="+z";
                        else if(dir=="+z")dir="+x";
                        else if(dir=="-z")dir="-x";
                    }
                }
            }
        }
    }
    cout<<dir<<'\n';
}

int main(){
    while(cin>>n, n){
        solve();
    }
    return 0;
}