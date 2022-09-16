#include <stdio.h>

int main()
{
    int a[10], i, x;

    printf("Enter 10 numbers\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    x = a[0];
    for (i = 1; i <= 9; i++)
    {
        if (x < a[i])
            x = a[i];
    }

    printf("Largest number stored in array is %d", x);
    
    
    return 0;
}