#include<stdio.h>
void main(){
   int i,j,k,n,x,a[20],b[20];
   printf("Enter the number of elements in the array:\n");
   scanf("%d",&n);
   printf("enter the list of elements\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
    for(j=0;j<n;j++){
             b[j]=1;
         for(k=0;k<n;k++)
         {

             if(k!=j)
             {

                 b[j]*=a[k];
             }
         }
    }
    printf("output:\n");
     for(i=0;i<n;i++){
        printf("%d\n",b[i]);
     }
}
