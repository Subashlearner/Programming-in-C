#include<stdio.h>
void main(){
   int i,j,n,d;
   char s[20];
   printf("enter the string to print in the pattern:\n");
   scanf("%s",&s);
   n=strlen(s);
   d=n;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
       if(i==j||j==d-i-1)
       {
           printf("%c",s[j]);
       }
       else
       {
           printf("  ");
       }
       }
    printf("\n");

   }
}
