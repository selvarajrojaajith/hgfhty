#include <stdio.h>
int main()
{
    int i, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", i);
    }
    return 0;
    }
