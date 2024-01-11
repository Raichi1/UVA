#include <bits/stdc++.h>
using namespace std;

int Case = 1;

void solve(){
    stack<string> sts, ste;
    string s;
    for(int i = 1; i <= 52; ++i){
        cin>>s;
        (i<=27)?sts.push(s):ste.push(s);
    }
    int x, y =0;
    for(int i = 0; i <3; ++i){
        s=sts.top();
        sts.pop();
        x=((s[0]>='2'&&s[0]<='9')?s[0]-'0':10);
        y+=x;
        int j = 1;
        while(j++<=(10-x))sts.pop();
    }
    vector<string> v;
    while(!ste.empty()){
        v.push_back(ste.top());
        ste.pop();
    }
    while(!sts.empty()){
        v.push_back(sts.top());
        sts.pop();
    }
    reverse(v.begin(),v.end());
    cout<<"Case "<<Case++<<": "<<v[y-1]<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}