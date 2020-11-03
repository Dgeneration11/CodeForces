#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        ll n,k;
        int x=0;
        cin>>n>>k;
        if(k>n){
            x=k-n;
        }
        else
        {
            if((n+k)%2){
                x=1;
            }
        }   
        cout<<x<<"\n";
    }
}