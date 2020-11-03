#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int one=0,o=0;
        for(int j=0; j<n;j++){
            int a;
            cin>>a;
            if(a==1){
                one++;
            }
            else{
                o++;
            }
        }
        if(o>=one){
            cout<<o<<endl;
            for(int j=0; j<o; j++){
                cout<<0<<" ";
            }
            cout<<endl;
        }
        else{
            if(one%2!=0){
                one = one-1;
            }
            cout<<one<<endl;
            for(int j=0; j<one; j++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
}