#include<stdio.h>
int main ()
{
    int i,j,n[5];
   
    
        for(i=0;i<5;i++)
        {
        n[i]=2*i;
        }
         for(i=0;i<5;i++)
         {
        printf("Element[%d] = %d\n",i,n[i]);
         }
    
    return 0 ;
}