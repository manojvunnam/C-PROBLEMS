#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("a:%d b:%d c:%d\n",a,b,c);
    if ((a>b)&&(a>c))
    printf("%d\n a is greater");
    else if(b>c)
    printf("%d\nb is greater");
    else
    printf("%d\nc is greater");
    return 0;
}