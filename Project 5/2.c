#include <stdio.h>

int main()
{
    int row, col,value=0;
    printf("Enter the number of rows:");
    scanf("%d", &row);

    printf("Enter the number of column:");
    scanf("%d", &col);

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("array[%d][%d]=", i,j);
            scanf("%d", &arr[i][j]);
            if(arr[i][j]>value){
                value = arr[i][j];
            }
        }
    }
    printf("The largest element is:%d",value);
    return 0;
}