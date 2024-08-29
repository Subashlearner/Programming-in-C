#include<stdio.h>
void main(){
 int i,j=0,n,a[20],max=0,min=20,count=0,b[20];
 printf("enter the number elements in the array:\n");
 scanf("%d",&n);
 printf("Enter the elements of array:");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     if(a[i]==1)
     {
         count++;

     }
     else{
        if(count>0){
            b[j++]=count;
        }
        count=0;
     }

 }
 if(count>0)
    b[j++]=count;
 if(j==0){
    printf("0 ones");

 }
  for(i=0;i<j;i++)
  {

      if(b[i]>max)
        {
          max=b[i];
        }
      if(b[i]<min)
      {
          min=b[i];

      }
        }
 printf("diff between max and min consicutive ones:%d",max-min);
}
