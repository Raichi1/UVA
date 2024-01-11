#include <bits/stdc++.h>
using namespace std;

int func(string &name){
    int cont = 0;
    for(int i = 0; i< name.size(); ++i){
        if(isalpha(name[i])){
            if(isupper(name[i]))cont+=((name[i]-'A')+1);
            else cont+=((name[i]-'a')+1);
        }
    }
    return cont;
}

int sum(string &val){
    int sm = 0;
    for(int i = 0; i < val.size(); ++i){
        sm+=(val[i]-'0');
    }
    return sm;
}

void solve(){
    string n1,n2;
    while(getline(cin,n1)){
        getline(cin,n2);
        int cont1 = func(n1), cont2 = func(n2);
        string ax1 =to_string(cont1), ax2 = to_string(cont2);
        while(ax1.size()>1){
            cont1 = sum(ax1);
            ax1 = to_string(cont1); 
        }
        
        while(ax2.size()>1){
            cont2=sum(ax2);
            ax2 = to_string(cont2);
        }
        cont2 = stoi(ax2), cont1 = stoi(ax1);
        double mx = max(cont2,cont1), mn = min(cont2,cont1);
        cout<<fixed<<setprecision(2)<<(mn*100/mx)<<" %\n";
    }
}

int main(){
    solve();
    return 0;
}