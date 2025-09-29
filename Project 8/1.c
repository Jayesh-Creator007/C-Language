#include <stdio.h>

int main() {
    char str[100];
    char *p;
    int length = 0;

    printf("Enter any string: ");
    gets(str);   

    p = str;  

    while (*p != '\0') {
        length++;
        p++;
    }

    printf("The length of a string is: %d\n", length);
    return 0;
}
