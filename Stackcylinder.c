#include <stdio.h>

void main()
{
    int s1[20], s2[20], s3[20];
    int i, n1, n2, n3, h1 = 0, h2 = 0, h3 = 0,i1=0,i2=0,i3=0;
    printf("Enter the number of cylinders in stack 1:\n");
    scanf("%d", &n1);
    printf("Enter the heights of each cylinder in stack 1:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &s1[i]);

    printf("Enter the number of cylinders in stack 2:\n");
    scanf("%d", &n2);
    printf("Enter the heights of each cylinder in stack 2:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &s2[i]);

    printf("Enter the number of cylinders in stack 3:\n");
    scanf("%d", &n3);
    printf("Enter the heights of each cylinder in stack 3:\n");
    for (i = 0; i < n3; i++)
        scanf("%d", &s3[i]);

    for (i = 0; i < n1; i++)
        h1 = h1 + s1[i];
    for (i = 0; i < n2; i++)
        h2 = h2 + s2[i];
    for (i = 0; i < n3; i++)
        h3 = h3 + s3[i];

    while (h1 != h2 || h2 != h3)
    {
        if (h1 >= h2 && h1 >= h3)
        {
            h1 = h1 - s1[i1];
            i1++;
        }
        else if (h2 >= h1 && h2 >= h3)
        {
            h2 = h2 - s2[i2];
            i2++;
        }
        else if (h3 >= h1 && h3 >= h2)
        {
            h3 = h3 - s3[i3];
            i3++;
        }
    }
    printf("The maximum possible equal height is: %d\n", h1);
}
