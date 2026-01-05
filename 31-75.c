#include <stdio.h>
int main() {
    int i,n;
    printf("enter the value:");
    scanf("%d",&n);
    int arr[5];
    int length=sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<length-1;i++){
    scanf("%d\n",&arr[i]);}
    return 0;
}