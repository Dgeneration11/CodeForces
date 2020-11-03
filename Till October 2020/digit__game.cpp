#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int odd=0,a=0,even=0,b=0;
        for(int j=0; j<n; j++){
            if(j%2==0){
                if((s[j]-48)%2==0) a=1;
                else odd=1;
            }
            else{
                if((s[j]-48)%2==0) even=1;
                else b=1;
            }
        }
        if(n%2==1){
            if(odd==1) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else
        {
            if(even==1) cout<<2<<endl;
            else cout<<1<<endl;
        }
        
    }
}