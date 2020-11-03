#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int mod(ll x, ll y){
    ll z = x%y;
    return z;
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        ll a,b;
        cin>>a>>b;
        ll x = mod(a, b);
        if(x==0){
            cout<<0<<endl;
        }
        else{
            cout<<(b - x)<<endl;
        }
    }
}