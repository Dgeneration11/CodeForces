#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    a=a-1;
    while(a>=5){
        a=a-5;
        a=a/2;
    }
    
    if(a==0){
        cout<<"Sheldon";
    }
    if(a==1){
        cout<<"Leonard";
    }
    if(a==2){
        cout<<"Penny";
    }
    if(a==3){
        cout<<"Rajesh";
    }
    if(a==4){
        cout<<"Howard";
    }
}