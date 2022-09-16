#include <stdio.h>

int main()
{
    int a[10], i, j; 
     
    printf("Enter 10 numbers\n");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    
    for (i = 0, j = 1; j <= 9; i++, j++)
    {
        if (a[i] > a[j])
        {
            a[i] = a[i] - a[j];
            a[j] = a[j] + a[i];
            a[i] = a[j] - a[i];
            i = -1;
            j = 0;
        }
    }
    for (i = 0; i <= 9; i++)
        printf("%d ", a[i]);
    
    
    return 0;
}