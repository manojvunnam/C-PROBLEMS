#include <stdio.h>
int main() {
    int p;
    scanf("%d",&p);
    printf("p:%d",p);
    if (p==1234)
    printf(" access granted");
    else
    printf("access not granted");
    return 0;
}