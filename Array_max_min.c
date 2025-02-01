#include<stdio.h>
int main()
{
    int n,max,min;
    printf("Enter the size of Array=");
    scanf("%d",&n);
    int m[n];
    for(int i=0;i<n;i++)
    {
        printf("Input index of %d  value=",i);
        scanf("%d",&m[i]);
    }

    max=m[0];
    for(int j=0;j<n;j++)
    {
        if(m[j]>max)
        max=m[j];
    }

    min=m[0];
      for(int j=0;j<n;j++)
    {
        if(m[j]<min)
        min=m[j];
    }

    printf("Maximum Number=%d\n",max);
    printf("Minimum number=%d\n",min);



    return 0;
}