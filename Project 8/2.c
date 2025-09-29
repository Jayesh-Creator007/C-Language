#include <stdio.h>

void cube(int *ptr, int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            int val = *(ptr + i*size + j);  
            printf("%d ", val * val * val); 
        }
        printf("\n");
    }
}

int main() {
    int size, i, j;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int arr[size][size];
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Cubes of all elements:\n");
    cube((int *)arr, size); 
    return 0;
}
