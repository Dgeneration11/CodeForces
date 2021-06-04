#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n;
        m=n;
        int x=0;
        while(!x){
            while(n){
                int z = n%10;
                if(z!=0){
                    if(m%z!=0){
                        m++;
                        n=m;
                        break;
                    }
                }
                n=n/10;
            }
            if(n==0) x++;
        } 
        cout<<m<<endl;
    }
    return 0;
}
