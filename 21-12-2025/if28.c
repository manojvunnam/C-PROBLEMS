#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("a:%d\n",a);
    if((a>0)&&(a%2==0))
    printf("positive even");
    else
    printf("positive odd");
    return 0;
}