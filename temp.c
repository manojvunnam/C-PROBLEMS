#include <stdio.h>
int main() {
    int a=10;
    int b=2;
    int temp=a;
a=b;
b=temp;
printf("a:%d b:%d",a,b);
    return 0;
}