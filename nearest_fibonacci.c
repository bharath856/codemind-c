#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,j=0,i,arr[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        arr[j]=a;
        c=a+b;
        a=b;
        b=c;
        j++;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>n)
        {
            break;
        }
    }
    if(n-arr[i-1] == arr[i]-n)
    {
        printf("%d %d",arr[i-1],arr[i]);
    }
    else if(n-arr[i-1] > arr[i]-n)
    {
        printf("%d",arr[i]);
    }
    else
    {
        printf("%d ",arr[i-1]);
    }
}
