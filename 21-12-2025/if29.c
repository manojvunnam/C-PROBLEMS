#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("a:%d\n",a);
    if((a%4==0)&&(a%8!=0))
    printf("yes");
    else
    printf("no");
    return 0;
}