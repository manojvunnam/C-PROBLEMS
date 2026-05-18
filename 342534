#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);
    if (strlen(str1) != strlen(str2))
    {
        printf("Strings are NOT anagrams");
        return 0;
    }
    for (i = 0; str1[i] != '\0'; i++)
    {
        freq1[str1[i]]++;
        freq2[str2[i]]++;
    }
    for (i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            printf("Strings are NOT anagrams");
            return 0;
        }
    }

    printf("Strings are ANAGRAMS");

    return 0;
}
