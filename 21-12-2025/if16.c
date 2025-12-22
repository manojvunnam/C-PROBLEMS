#include <stdio.h>
int main() {
   int x;
   scanf("%d",&x);
   printf("x:%d",x);{
    if (x<=100){
    x*=1;
    printf("total bill:%d",x);}
    else {
    x*=2;
    printf("total bill:%d",x);}
   }
    return 0;
}