#include<stdio.h>
int main()
{
    int n,arr[100],k,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
}
