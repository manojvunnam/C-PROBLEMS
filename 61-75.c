#include <stdio.h>
int main() {
    int base,exp,power=1;
    printf("enter base and exponent:");
    scanf("%d %d",&base,&exp);
while(exp>0){
    power*=base;
    exp--;
}
printf("power=%d",power);
    return 0;
}