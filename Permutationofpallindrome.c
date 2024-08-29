#include <stdio.h>
#include <string.h>

void main()
{
    int i, x = 0, n, b[256] = {0};
    char a[20];
    printf("Enter the string:\n");
    scanf("%s", a);
    n = strlen(a);
    for(i = 0; i < n; i++)
    {
        b[a[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
       if(b[i]%2!=0)
        x++;
    }

    if(x==1||x==0)
        printf("yes");
    else
        printf("no");
}
