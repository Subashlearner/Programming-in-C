/* the array is given ,find the average of the array ,after find it compare with the arrayelement which is nearest*/
#include<stdio.h>
void main(){
   int i,j,k,n,x=0,a[20],diff,nearest;
   printf("Enter the number of elements in the array:\n");
   scanf("%d",&n);
   printf("enter the list of elements\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       x+=a[i];
   }
   k=x/n;
   diff=abs(k-a[0]);
   nearest=a[0];
   for(i=1;i<n;i++)
   {
       j=abs(k-a[i]);
       if(j<diff)
       {
           diff=j;
           nearest=a[i];

       }
   }
   printf("nearest :%d",nearest);
}
