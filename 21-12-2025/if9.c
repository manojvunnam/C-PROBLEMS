#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    printf("x:%c\n",x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    printf("x is vowel");
    else
    printf("x is consonants");
    return 0;
}