#include <stdio.h>
int main() {
    char alphabet;
    scanf("%c",&alphabet);
    printf("alphabet:%c\n",alphabet);
    if ((alphabet>='a')&&(alphabet<='z'))
    printf("lower case");
    else
    printf("upper case");
    return 0;
}