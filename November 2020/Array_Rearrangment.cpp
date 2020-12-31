#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main () {
  int t;
  cin>>t;
  while(t--){
   int n,x;
   cin >> n >> x;
   int * a = new int [n];
   int * b = new int [n];

   for(int i=0;i<n;i++){cin>>a[i];}
   for(int i=0;i<n;i++){cin>>b[i];}
   sort(a,a+n);
   sort(b,b+n);
   bool flag = true;
   for(int i=0;i<n;i++){
     if(a[i]+b[n-i-1]>x){flag=false;break;}
   }
   if(flag)cout << "Yes\n";
   else cout << "No\n";
  }
 }
