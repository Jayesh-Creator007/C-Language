#include <stdio.h>

int main()
{
    int a;
    printf("Enter the array's row & column size:");
    scanf("%d", &a);
    int arr[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &arr[j][i]);
        }
    }
    printf("The transpose matrix of an array:\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}