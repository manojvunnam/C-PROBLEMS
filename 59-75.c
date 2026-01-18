#include <stdio.h>
int main() {
    int a,b,gcd;
    printf("enter two values:");
    scanf("%d %d",&a,&b);
    while(b!=0){
        gcd=b;
        b=a%b;
        a=gcd;
    }
    printf("gcd=%d",a);
    
    return 0;
}