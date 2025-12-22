#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("a:%d",a);
    if (a>=35)
    printf("pass marks");
    else if(a<35 && a>=30)
    printf("grace marks");
    else
    printf("fail");
    return 0;
}