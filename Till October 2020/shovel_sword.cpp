#include<iostream>
using namespace std;

int main()
{
    int n,sh=0,sw=0;
    cin>>n;
    for(int i=0;i<n;i++){
        long a,b;
        cin>>a>>b;

        if(a*2<=b){
            cout<<a<<endl;
        }
        else if(2*b<=a){
            cout<<b<<endl;
        }
        else{
            cout<<(a+b)/3<<endl;
        }
}
}

