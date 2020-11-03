#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        int l,r;
        int x = b;
        int y = b;
        for(int j=0; j<c; j++){
            cin>>l>>r;
            if(l<=x && r>=x){
                x=l;
            }
            if(r>=y && l<=y)
            {
                y=r;
            }
        }
        cout<<y-x+1<<endl;
    }
}