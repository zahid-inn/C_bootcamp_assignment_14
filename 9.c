#include <stdio.h>

int main()
{
    int x, a[5], i;

    printf("Enter how much total numbers you want to enter\n");
    scanf("%d", &x);

    printf("Enter values\n");
    for (i = 0; i < x; i++)
        scanf("%d", &a[i]);

    for (i = x - 1; i >= 0; i--)
        printf("%d", a[i]);

    return 0;
}