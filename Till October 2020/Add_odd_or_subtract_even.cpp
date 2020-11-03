#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        int a,b;
        cin>>a>>b;
        
        if(a-b==0){
            cout<<0<<endl;
        }
        else if (a<b){
            if((b-a)%2==0){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else if(a>b){
            if(a>b){
                if((a-b)%2==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
            }
        }
    }
}