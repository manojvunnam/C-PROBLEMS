#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    int months=days/30;
    int year=months/12;
    int rem=months%12;
    printf("%d\n",months);
    printf("%d year",year);
    if(rem!=0){
        printf("%d months",rem);
    }
    return 0;
}