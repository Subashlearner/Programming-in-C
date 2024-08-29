#include <stdio.h>
#include <stdlib.h>

void main() {
    int i, j, a[20], n, k, diff, nearest, x, y;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    if (n <= 0 || n > 20) {
        printf("Invalid number of elements. Must be between 1 and 20.\n");
        return;
    }
    printf("Enter the list of elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the closest number:\n");
    scanf("%d", &k);

    nearest = a[0] + a[1];
    diff = abs(k - nearest);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            y = a[i] + a[j];
            x = abs(k - y);

            if (x < diff) {
                diff = x;
                nearest = y;
            }
        }
    }
    printf("Nearest: %d\n", nearest);
}
