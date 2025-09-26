#include <stdio.h>
#include <string.h>
int main() {
    char name[10];
    printf("Enter word: ");
    scanf("%s", name);   
    
    
    char a[10];
    strcpy(a,name);
    strrev(a);

    if (strcmp(a, name) == 0){
        printf("The word is a Palindrome\n");
    } else {
        printf("The word is not a Palindrome \n");
    }

    return 0;
}
