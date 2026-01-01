#include <stdio.h>
#include <math.h>
int main() {
    int n ,i,prime=1;
    scanf("%d",&n);
    if (n<=1){
    prime=0;}
    else{
    for (i=2;i<=sqrt(n);i++){
        if (n%i==0){
        prime=0;
        break;}
    }
    }
    if (prime==1){
        printf("prime number",n);
       } else{
        printf("not prime number",n);}
    
    return 0;
}