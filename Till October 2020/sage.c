#include<stdio.h>
#include<string.h>
int main()
{
    int n, max=0;
    int temp=0;
    int a[100000],arr[100000];
    scanf("%d \n", &n);
    for(int i=0; i<n; i++)
        scanf("%d \n", &a[i]);
    if(n%2==0)
        max=(n-2)/2;
    else
        max=(n-1)/2;
    printf("%d \n", max);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    if(n%2==0)
        max=max+1;
    for(int i=0; i<n; i++)
    {
        if(i<max)
            arr[2*i+1] = a[i];
        else
            arr[2*(i-max)]=a[i];
    }
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}
