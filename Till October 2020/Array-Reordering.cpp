#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

void swap(int * x, int * y){
  int t = * x;
  * x = * y;
  * y = t;
}

void segregate(int array[], int n){
  int left = 0, right = n - 1;
  while (left < right){
    while (array[left] % 2 == 0 && left < right)
      left++;
    while (array[right] % 2 == 1 && left < right)
      right--;
    if (left < right){
      swap( & array[left], & array[right]);
      left++;
      right--;
    }
  }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n],arr[n];
        for(int i=0; i<n;i++){
            cin>>a[i];
            arr[i] = a[i];
        }
        
        segregate(arr, n);

        int res=0;
        for(int i=0; i<n-1;i++){
            for(int j=i+1; j<n;j++){
                if(gcd(arr[i], 2*arr[j]) > 1){
                    res++;
                }
            }
        }

        cout<<res<<endl;

        /* for(int i=0; i<n; i++){
            cout<<arr[i]<<" "<<endl;
        } */
    }
}