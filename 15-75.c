#include <stdio.h>
int main() {
    char alpha;
    scanf("%c",&alpha);
    printf("alpha:%c\n",alpha);
    if (((alpha>='a')&&(alpha<='z'))||((alpha>='A')&&(alpha<='Z'))){
    printf("alphabet");}
    else{
    printf("not alphabet");}
    return 0;
}