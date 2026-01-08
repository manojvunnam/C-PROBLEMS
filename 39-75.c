#include <stdio.h>
int main() {
    int n,i,arr1[10],arr2[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=1;i<=n;i++){
        arr2[i]=arr1[i];
    }
    for(i=1;i<=n;i++){
        printf("arr2[i]:%d  ",arr2[i]);
    }
    return 0;
}