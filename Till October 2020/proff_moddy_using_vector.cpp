#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin>>p;
    char pos[101][101};
    for(int i=0; i<=p;i++){
        gets(pos[i]);
    }
    int n;
    cin>>n;
    char neg[101][101];
    for(int i=0; i<=n;i++){
        gets(neg[i]);
    }
    int w;
    cin>>w;
    char word[1001][1001];
    for(int i=0; i<=w;i++){
        gets(word[i]);
    }
    int positive=0, negative=0;
    for(int i=0; i<=w;i++){
        for(int j=0; j<=p; j++){
            if(strcmp(word[i], pos[j])==0){
                positive++;
            }
        }
    }
    for(int i=0; i<=w;i++){
        for(int j=0; j<=n; j++){
            if(strcmp(word[i], neg[j])==0){
                negative++;
            }
        }
    }
    if(positive>negative){
        cout<<"Positive\n";
    }
    else if(positive == negative){
        cout<<"Neutral\n";
    }
    else{
        cout<<"Negative\n";
    }
}