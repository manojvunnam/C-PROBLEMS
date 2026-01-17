#include <stdio.h>
int main() {
int n,i,sum,fact,real;
scanf("%d",&n);
sum=0;
while (n!=0){
    real=n%10;
    fact=1;
    for (i=1;i<=real;i++){
     fact=1*i;}
     n=n/10;
    sum=sum+fact;}
if ((sum==n&&n>0)){
printf("strong number");}
else{
    printf("not strong number");}
    return 0;
}