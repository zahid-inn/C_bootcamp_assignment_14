#include <stdio.h>

int main()
{
    int a[10], i, sum_E = 0, sum_O = 0;

    printf("Enter 10 numbers\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
            sum_E += a[i];
        
        else
            sum_O += a[i];    
    }

    printf("Sum of Even numbers %d \n", sum_E);
    printf("Sum of Odd numbers %d", sum_O);

    
    return 0;
}