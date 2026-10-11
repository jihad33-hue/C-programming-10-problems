#include <stdio.h>
int main()
{
    int n, i = 1, c = 1;

  printf("Enter the value: ");
    scanf("%d", &n);
    while(i <= n)
    {
     c *= i;
        i++;
   }

    printf("Factorial = %d", c);
    return 0;
}
