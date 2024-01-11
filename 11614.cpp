#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<(ll)((sqrt(8*n+1)-1)/2)<<'\n';
    }
    return 0;
}