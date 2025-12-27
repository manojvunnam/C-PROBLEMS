#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("%d",a);
    if (a%2==0)   
printf("even");
else if (a%2!=0)
printf("odd");
else
printf("invalid number");
    return 0;
}