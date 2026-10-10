
#include <stdio.h>

int main()
{int n, i = 1, sum = 0;

    printf("Enter the value: ");
    scanf("%d", &n);

    while(i <= n)
    {printf("%d\n", i * i);
        sum = sum + i * i;
        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}
