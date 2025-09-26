#include <stdio.h>
int main()
{
    int a, b, count = 1, c;
    while (count > 0)
    {
        printf("\n\nSelect 0 To Exit");
        printf("\nSelect 1 for +");
        printf("\nSelect 2 for -");
        printf("\nSelect 3 for *");
        printf("\nSelect 4 for /");
        printf("\nSelect 5 for mod or remainder\n");
        printf("Enter your choice: ");
        scanf("%d", &c);
        if (c != 0)
        {
            printf("Enter values one:");
            scanf("%d", &a);
            printf("Enter values two:");
            scanf("%d", &b);
        }

        switch (c)
        {
        case 1:
            printf("The sum is %d\n", a + b);
            break;
        case 2:
            printf("The difference is %d\n", a - b);
            break;
        case 3:
            printf("The product is %d\n", a * b);
            break;
        case 4:
            printf("The quotient is %d\n", a / b);
            break;
        case 5:
            printf("The remainder is %d\n", a % b);
            break;

        default:
            count = 0;
            break;
        }
    }

    return 0;
}

