#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int P=0,Q=0;

        if(a>b){
            P=a;
        }
        else{
            P=b;
        }

        if(x>y){
            Q = x;
        }
        else{
            Q=y;
        }
        
        if((P>x || P>y) && (Q>a || Q>b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
    }

    return 0;
}