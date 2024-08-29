#include<stdio.h>
void main(){
   int i,n,x;
   printf("Enter the number you needed to round of:");
   scanf("%d",&n);
   x=n%10;
   if(x>=5){
         n=n+(10-x);

   }
   else{
     n=n-x;
   }
   printf("the number round off to nearest :%d",n);

}
