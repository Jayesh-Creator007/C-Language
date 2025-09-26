#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int freq[256] = {0};
    int i, length;

    printf("Enter any string: ");
    gets(str);

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    printf("Frequency of each letter:\n");
    
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c => %d\n", i, freq[i]);
        }
    }
    return 0;
}
