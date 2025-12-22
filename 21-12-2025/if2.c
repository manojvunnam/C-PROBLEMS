#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
   printf("a:%d",a);{
   if (a<0)
   printf("a is negative");
   else if(a>0)
   printf("a is positive");
   else if (a==0)
   printf("a is considered either positive or negative");}
    return 0;
}