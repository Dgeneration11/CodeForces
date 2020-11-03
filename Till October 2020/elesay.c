#include<stdio.h>
#include<string.h>
int main()
{
    int a[200][200],i,j;
    int n;
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        gets(a[i]);
    }
    for(int j=0; j<=n;j++){
        printf("%s\n", a[j]);
    }
}