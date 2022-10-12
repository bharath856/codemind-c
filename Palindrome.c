#include<stdio.h>
int main()
{
    int n,reverse=0,rem,temp=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if(reverse==temp)
    {
        printf("True");
    }
    else
    {
    printf("False");
    }
    return 0;
}