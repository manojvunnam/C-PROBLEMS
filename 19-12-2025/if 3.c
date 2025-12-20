#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d\n",a,b);
    if(a>b)
    printf("a is greater");
    else if(b>a)
    printf("b is greater");
    return 0;
}