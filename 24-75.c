#include <stdio.h>
int main() {
    int n,sum,reminder;
    scanf("%d",&n);
    sum=0;
    while(n!=0){
    reminder=n%10;
    sum=sum+reminder;
    n=n/10;}
    printf("sum:%d",sum);
    return 0;
}