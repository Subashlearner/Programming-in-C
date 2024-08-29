#include<stdio.h>
void main(){
   char s[20];
   int i,l,a=0,b=0,c=0;
   printf("enter the expression:");
   scanf("%s",&s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       if(s[i]=='{')
        c++;
        if(s[i]=='}')
        c--;
        if(s[i]=='[')
        b++;
        if(s[i]==']')
        b--;
        if(s[i]=='(')
        c++;
        if(s[i]==')')
        c--;
   }
   if(c==0&&a==0&&b==0)
    printf("yes");
   else
    printf("no");
   }

