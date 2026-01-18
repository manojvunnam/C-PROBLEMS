#include <stdio.h>
int main() {
    int n,i,j,prime,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        prime=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
    prime=0;
    break;
            }
        }
        if(prime)
        sum=sum+i;
    }
    printf("sum of prime numbers upto %d=%d",n,sum);
    return 0;
}