#include <stdio.h>

int main()
{
    int a[10], sum = 0, i;

    printf("Enter 10 numbers\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d:", &a[i]);
        sum += a[i];
    }
    printf("Sum of 10 numbers is %d", sum);
    
    return 0;
}