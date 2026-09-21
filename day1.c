#include <stdio.h>

int main()
{
    int n, digit;
    int sum = 0;

    printf("Enter a 9-digit number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Missing digit = %d", 45 - sum);

    return 0;
}
