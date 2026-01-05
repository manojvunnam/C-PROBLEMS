#include <stdio.h>
int main() {
int n,i,arr[5],sum=0;
printf("enter the value:");
scanf("%d",&n);
for(i=0;i<=n-1;i++){
scanf("%d",&arr[i]);
sum+=arr[i];}
printf("sum of array values:");
printf("%d",sum);

    return 0;
}