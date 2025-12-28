#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("a:%d",a);
    if(a%11==0)
    printf("a divisable by 11");
    else
    printf("a is not divisable by 11");
    
    return 0;
}