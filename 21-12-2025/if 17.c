#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("a:%d b:%d c:%d",a,b,c);
    if (a+b+c==180)
    printf("valid");
    else 
    printf("not valid");
    
    return 0;
}