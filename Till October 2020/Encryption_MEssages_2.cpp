#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    cin>>n>>m>>c;
    int a[n], b[m];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    for(int i=0; i<m;i++){
        cin>>b[i];
    }
    int x=0;
    for(int i=0; i<n;i++){
        if(i+m>n){
            x = x-(b[i-n+m-1])%c;
        }
        if(i<m){
            x = x+(b[i])%c;
        }
        cout<<" "<<(a[i]+x)%c;
    }
}