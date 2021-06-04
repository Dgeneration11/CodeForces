#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        string s;
        cin>>s;
        a = count(s.begin(), s.end(), '0');
        b = s.length() - a;
        
        if(min(a,b)%2==0){
            cout<<"NET\n";
        }
        else cout<<"DA\n";

    }
}

