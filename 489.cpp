#include <bits/stdc++.h>
using namespace std;

int n;
bool wrong[26];
map<char,bool> mp;

void solve(){
    memset(wrong, 0, sizeof wrong);
    mp.clear();
    string s, s1;
    cin>>s>>s1;
    bool win = 0;
    int cont=0;
    for(auto ch: s)mp[ch]=0;
    for(int i = 0; i < s1.size(); ++i){
        win = 1;
        if(mp.count(s1[i]))mp[s1[i]]=1;
        else {
            if(!wrong[s1[i]-'a']){
                cont++;
                wrong[s1[i]-'a']=1;
            }
        }
        for(auto ch: mp){
            if(!ch.second)win=0;
        }
        if(win){
            cout<<"You win.\n";
            return;
        }
        if(cont==7){
            cout<<"You lose.\n";
            return;
        }
    }
    cout<<"You chickened out.\n";
}

int main(){
    while(cin>>n, n!=-1){
        cout<<"Round "<<n<<'\n';
        solve();
    }
    return 0;
}
