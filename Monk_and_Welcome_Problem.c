#include <stdio.h>

int main()
{
    int i,j,k;
    int a[100000],b[100000],c[100000];
    //printf("Enter the Size of Array A and B:/n");
    int n;
    scanf("%d",&n);
    //printf("Enter the elements of Array A:
");
     for(i=0;i<n;i++)
     {
      scanf("%d
",&a[i]);  
     }
    //printf("
Enter Elements of Array B:
");
    for(i=0;i<n;i++)
    {
        scanf("%d
",&b[i]);
    }
    
    for(j=0;j<n;j++)
    {
       c[j]=a[j]+b[j];
       printf("%d ",c[j]);
    }
    
    return 0;
}