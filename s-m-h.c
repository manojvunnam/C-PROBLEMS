#include <stdio.h>
int main() {
    int secens;
    scanf("%d",&secens);
int minuets=secens/60;
printf("%d\n",minuets);
int hours=minuets/60;
printf("%d hour",hours);
int rem=minuets%60;
if(rem!=0){
    printf("%d minuets",rem);
}
    return 0;
}