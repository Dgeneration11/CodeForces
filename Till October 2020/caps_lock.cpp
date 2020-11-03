#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x = 1;
    for(int i=1;i<=s.length();i++){
        if(s[i]>=97 && s[i]<=122){
            x=0;
            break;
        }
    }
    if(x==1){
        for(int i=0; i<s.length(); i++){
            if(s[i]>=65 && s[i]<=90){
                s[i]+=32;
            }
            else{
                s[i] -= 32;
            }
        }
    }
    cout<<s;
}