#include <stdio.h>

int main()
{
    int a[10], i, sum = 0, avg;

    printf("Enter 10 numbers\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    avg = sum/10;
    printf("Average of given numbers is %d", avg);
    
    return 0;
}