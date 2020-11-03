#include<iostream>
#include<math.h>

using namespace std;
int main(){
    long long int n;
    cin>>n;
    int i=2;

    while(i<n){
        if(n%i==0){
            cout<<"Not Prime";
            break;
        }
        i++;
    }
    cout<<"Prime";
}

