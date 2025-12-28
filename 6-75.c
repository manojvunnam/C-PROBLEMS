#include <stdio.h>
int main() {
    char alphabet;
    scanf("%c",&alphabet);
    printf("alphabet:%c\n",alphabet);
    if ((alphabet=='a')||(alphabet=='e')||(alphabet=='i')||(alphabet=='o')||(alphabet=='u')){
    printf("vowel");}
    else{
    printf("not vowel");
    }
    return 0;
}