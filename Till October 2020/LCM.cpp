#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,factor=0;
    cin>>a>>b;

    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            factor=i;
        }
    }
    cout<<(a*b)/factor;
}