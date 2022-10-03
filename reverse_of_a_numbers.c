#include<stdio.h>
int main()
{
    int rem=0,num,number=0;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        number=number*10+rem;
        num=num/10;
    }
    printf("%d",number);
}