#include <stdio.h>
int main() {
    char alpha;
    scanf("%c",&alpha);
    if ((alpha>='a')&&(alpha<='z')){
    printf("aplha:%d",alpha);}
    else if ((alpha>='A')&&(alpha<='Z')){
    printf("alpha:%d",alpha);}
    return 0;
}