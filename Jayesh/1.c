#include <stdio.h>

int main()
{
    int a, count = 0;
    printf("Enter a three digit positive number :");
    scanf("%d", &a);
    count = a % 10;

    if (a > 0 && a < 1000 & a > 99)
    {
        a = a / 100;

        count += a;
        printf("The sum of first and last digit=%d", count);
    }
    else
    {
        printf("The given number is not a three digit positive number");
    }

    return 0;
}