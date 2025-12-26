#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("a:%d b:%d c:%d",a,b,c);
    int area=a*b*c;
    printf("area=%d",area);
    
    return 0;
}