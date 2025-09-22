#include <stdio.h>

int main()
{
    int row, col,a,b,c=0,d=0;
    printf("Enter the number of rows:");
    scanf("%d", &row);

    printf("Enter the number of columns:");
    scanf("%d", &col);

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("array[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the number of row:");
    scanf("%d", &a);
    printf("Elements of row:\n");
    for (int i = 0; i < 3; i++)
    {
       printf("%d ",arr[a][i]);
       c+=arr[a][i];
    }
    printf("The sum of a row:%d\n",c);
    
    printf("Enter the number of column:");
    scanf("%d", &b);
    printf("Elements of column:\n");
    for (int i = 0; i < 3; i++)
    {
       printf("%d ",arr[i][b]);
       d+=arr[i][b];
    }
    printf("The sum of a column:%d",d);
    return 0;
}