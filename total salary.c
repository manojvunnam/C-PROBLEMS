#include <stdio.h>
int main() {
    int salary;
    scanf("%d",&salary);
    int hra,da;
    scanf("%d %d",&hra,&da);
     hra=(hra*salary)/100;
     da=(da*salary)/100;
    int total_salary=hra+da+salary;
    printf("%d",total_salary);
    return 0;
}