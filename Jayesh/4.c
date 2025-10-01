#include <stdio.h>

int main()
{
    int size;
    printf("Enter the length of arrays:");
    scanf("%d", &size);
    int arr[size];
    int arra[size];
    int *p1=arr;
    int *p2=arra;
    printf("Enter value of both arrays\n");
    for (int i = 0; i < size; i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&arr[i]);
    }
     for (int i = 0; i < size; i++)
    {
        printf("\nb[%d]=",i);
        scanf("%d",&arra[i]);
    }

     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ",p1[i]+p2[j]);
        }
        
    }
    
    
    return 0;
}