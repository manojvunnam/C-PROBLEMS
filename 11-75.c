#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("a:%d\n",a);
    if ((a%3==0)&&(a%5==0))
    printf("multiple of 3 and 5");
    else 
    printf("not multiple of 3 and 5");
    return 0;
}