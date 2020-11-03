#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string s[100];
    cin>>s;
    int x = s.length();
    int temp = 0;

    for(int i=0;i<x; i+=2){
        for(int j=0; j<i;j+=2){
            if(s[i]<s[j]){
                temp = s[i];
                s[i]=s[j];
                s[j] = temp;
            }
        }
    }
    cout<<s;
}

