#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("a:%d\n",a);
    if(a%5==0)
    printf("divisable by five");
    else
    printf("not divisable by five");
    return 0;
}