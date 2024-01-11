#include <bits/stdc++.h>
using namespace std;

int f(string str){
    if(str.size()==1) return stoi(str);
    int sum = 0;
    for(int i = 0; i < str.size(); ++i)sum += (str[i]-'0');
    return f(to_string(sum));
}

int main(){
    string s;
    while(cin>>s, s[0]!='0'){
        cout<<f(s)<<'\n';
    }
    return 0;
}