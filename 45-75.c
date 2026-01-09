#include <stdio.h>
int main() {
    int n,i,arr[20];
    int average;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
    }average=sum/n;
    printf("%d",average);
    return 0;
}