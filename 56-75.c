#include <stdio.h>
int main() {
    int n,sum,i;
    scanf("%d",&n);
    sum=0;
    for (i=n;i!=0;i=i/10){
    int rem=i%10;
    sum=sum+(rem*rem*rem);}
if (sum==n){
printf("arm strong number");}
else{
    printf("not arm strong number");}
    return 0;
}