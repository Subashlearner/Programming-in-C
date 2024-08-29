#include<stdio.h>
void main(){
   char s[20],b[20],a;
   int i,l;
   printf("enter the expression:");
   scanf("%s",&s);
   l=strlen(s);
  strcpy(b, s);
   for(i=0;i<l/2;i++)
   {
       a=s[i];
       s[i]=s[l-1-i];
       s[l-1-i]=a;
   }
    printf("the reverse string is:%s\n",s);
    if(strcmp(s, b) == 0)
        printf("YES");
    else
        printf("NO");
   }

