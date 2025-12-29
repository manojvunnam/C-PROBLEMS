#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    printf("age:%d",age);
    if (age>=18){
    printf("aligible to vote");}
    else{
    printf("not eligible for vote");}
    return 0;
}