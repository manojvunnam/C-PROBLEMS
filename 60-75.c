#include <stdio.h>
  int main() {
    int a,b,gcd,x,y,lcm;
    printf("enter two values:");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while(y!=0){
        gcd=y;
        y=x%y;
        x=gcd;
    }
    lcm=(a*b)/x;
printf("lcm=%d",lcm);
    
    return 0;
}