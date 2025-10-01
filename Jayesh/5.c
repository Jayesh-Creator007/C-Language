#include <stdio.h>

int main(){
    int a=10;
    for (int i = 0; i < 5; i++)
    {
        
        for (int k = 0; k < i*3; k++)
        {
            printf(" ");
        }
        for (int j = 10-i; j >= 6; j--)
        {
           printf("%d ",j);
            
        }
        
        printf("\n");
    }
    
    return 0;
}