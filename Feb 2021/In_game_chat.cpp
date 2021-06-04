#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, count=0;
        string s;
        cin>>n;
        cin>>s;
        reverse(s.begin(), s.end());
        for(int j=0; s[j]!='\0'; j++){
            if(s[j] == ')'){
                count++;
            }
            else break;
        }
        if(count > s.size() - count){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;


    }
}