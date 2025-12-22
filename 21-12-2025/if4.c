#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    printf("age:%d\n",age);
    if (age>=18)
    printf("aligible to vote");
    else
    printf("not aligible to vote");
    return 0;
}