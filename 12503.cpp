#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, pos =0;
    string s;
    cin>>n;
    cin.ignore();
    vector<string> v(n+1);
    for(int i = 1; i <=n; ++i){
        getline(cin,s);
        if(s=="LEFT"){
            pos--;
            v[i]=s;
        }
        else{ 
            if(s=="RIGHT"){
                pos++;
                v[i]=s;
            }
            else{
                string num;
                istringstream axs(s);
                while(axs>>num)
                v[i]=num;
                int ax = i;
                while(v[ax]!="LEFT"&&v[ax]!="RIGHT"){
                    ax = stoi(v[ax]);
                }
                (v[ax]=="LEFT")?pos--:pos++;
            }
        }
    }
    cout<<pos<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}