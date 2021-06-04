#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count =0;
    sort(s.begin(), s.end());

    for(int i=0; i<s.length(); i++){
        if(s[i] == s[i+1]){
            continue;
        }
        count++;
    }
    if(count%2){
        cout<<"IGNORE HIM!";
    }
    else cout<<"CHAT WITH HER!";
}