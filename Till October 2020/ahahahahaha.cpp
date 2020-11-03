#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int e=0,o=0;
    for(int i=0; i<t;i++)
    {
    int n;
    cin>>n;
    int a[n];
    int even=0,odd=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(n==2){
        cout<<"1"<<endl;
        if(a[1]==a[2]){
            cout<<a[1]<<endl;
        }
        else{
            if(a[1]==0){
                cout<<a[1]<<endl;
            }
            cout<<a[2]<<endl;
        }
    }
    else
    {      
        for(int i=1;i<=n;i++){
            if(i%2==0){
                even+=a[i];
            }
            if(i%2!=0){
                odd+=a[i];
            }
        }
        int count=0;
        if(even == odd){
            cout<<n<<endl;
            for(int i =1;i<=n;i++){
                cout<<a[i]<<" ";
            }
        }
        else{
            for(int i=n;i>=1;i--){
                if(i%2==0){
                    e=e+a[i];
                    count++;
                    if(e==o){
                        break;
                    }
                }
                else{
                    o=o+a[i];
                    count++;
                    if(e==o){
                        break;
                    }
                }
            }
            cout<<count<<endl;
            for(int j=n-count+1;j<=n;j++){
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }
    }
    }
}