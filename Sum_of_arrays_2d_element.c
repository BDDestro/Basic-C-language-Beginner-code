#include<stdio.h>

int main()
{
    int n,sum=0,m[n];
printf("Enter the size of array=");
scanf("%d",&n);
 
 for (int i=0;i<n;i++)
 {
    printf("input index %d value=",i);
    scanf("%d",&m[i]);
 }
 for (int j=0;j<n;j++)
 {
    sum=sum+m[j];
 }
   printf("sum=%d\n",sum);

    return 0;
}