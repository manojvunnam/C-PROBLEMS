#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }   int count=0;
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    printf("count:%d",count);
    
    return 0;
}