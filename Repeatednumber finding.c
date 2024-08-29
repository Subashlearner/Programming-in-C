// in given array every number repeat expect one number,want to find that number
#include<stdio.h>
void main(){
 int i,a[20],n,x,y;
 printf("enter the number of elements in the array :");
 scanf("%d",&n);
 x=0;
  printf("enter the elements in the array :");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
     x=x^a[i];

 }
 printf("the odd number:%d",x);

}
