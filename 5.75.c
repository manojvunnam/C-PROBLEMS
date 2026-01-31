#include <stdio.h>
#include <string.h>

int main() {
    char code[100];
    int i, len, flag = 1;

    printf("Enter product code: ");
    scanf("%s", code);

    len = strlen(code);

    for (i = 0; i < len / 2; i++) {
        if (code[i] != code[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
