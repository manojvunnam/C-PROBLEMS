#include <stdio.h>
int main() {
    int age,salary;
    scanf("%d %d",&age,&salary);
    printf("age:%d salary:%d",age,salary);
    if((age>=25)&&(salary>=30000))
    printf("valid");
    else
    printf("not valid");
    return 0;
}