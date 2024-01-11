#include <bits/stdc++.h>
using namespace std;

int t;
string a,b;

void solve(){
    cin>>a>>b;
    deque<char> dqJa1, dqJa2, dqJh1,dqJh2;
    for(char ch: a)dqJa1.push_back(ch);
    for(char ch: b)dqJh1.push_back(ch);
    int win = -1;
    char cardJane, cardJhon;
    for(int cards = 0; cards < 1000; ++cards){
        cardJane = dqJa1.front();
        dqJa1.pop_front();
        dqJa2.push_back(cardJane);
        
        cardJhon = dqJh1.front();
        dqJh1.pop_front();
        dqJh2.push_back(cardJhon);
        
        if(cardJhon==cardJane){
            int turn = rand()/141%2;
            if(!turn){
                cout<<"Snap! for Jane: ";
                while(!dqJh2.empty()){
                    dqJa2.push_back(dqJh2.front());
                    dqJh2.pop_front();
                }
                for(int i = dqJa2.size()-1; i >=0; --i)cout<<dqJa2[i];
                cout<<'\n';
            }
            else{
                cout<<"Snap! for John: ";
                while(!dqJa2.empty()){
                    dqJh2.push_back(dqJa2.front());
                    dqJa2.pop_front();
                }
                for(int i = dqJh2.size()-1; i >= 0; --i)cout<<dqJh2[i];
                cout<<'\n';
            }
        }
        if(dqJa2.empty() && dqJa1.empty()){
            win = 1;
            break;
        }
        if(dqJh1.empty() && dqJh2.empty()){
            win = 0;
            break;
        }
        if(dqJa1.empty()){
            while(!dqJa2.empty()){
                dqJa1.push_back(dqJa2.front());
                dqJa2.pop_front();
            }
        }
        if(dqJh1.empty()){
            while(!dqJh2.empty()){
                dqJh1.push_back(dqJh2.front());
                dqJh2.pop_front();
            }
        }
    }
    if(win == -1)cout<<"Keeps going and going ...";
    else if(win == 0)cout<<"Jane wins.";
    else cout<<"John wins.";
    cout<<'\n';
    if(t)cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin>>t;
    while(t--){
        cin.ignore();
        solve();
    }
    return 0;
}