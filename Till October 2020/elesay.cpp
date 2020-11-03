#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    gets(s);
    int a;
    cin>>a;
    char b[200][200];
    for(int i=0; i<=a; i++){
        gets(b[i]);
    }
    cout<<s<<endl;
    for(int i=0; i<=a; i++){
        cout<<b[i]<<endl;
    }
}