#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d ",&a,&b);
    printf("a:%d\n b:%d ",a,b); 
    int c=a-b;
    printf("c:%d",c);
    c--;
    printf("c:%d",c);
    
    return 0;
}