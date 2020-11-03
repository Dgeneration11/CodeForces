#include<iostream>
#include<cstring>
#include<ctype.h>
#include<conio.h>


using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if(a%2==0 || b%2==0 || (a%2==0 && b%2==0)){
        cout<<a*b/2;
    }
    else if(a%2!=0 && b%2!=0){
        cout<<(a*b-1)/2;
    }
}