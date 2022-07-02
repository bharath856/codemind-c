#include<stdio.h>
int main(){
    int n,i,max=0;
    scanf("%d",&n);
    float avg;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        max=max+arr[i];
    }
    avg=float(max)/float(n);
    printf("%.2f",avg);
}