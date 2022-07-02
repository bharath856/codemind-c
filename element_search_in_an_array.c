#include<stdio.h>
int main(){
    int n,i,max=0,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            max++;
        }
    }
    if(max!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}