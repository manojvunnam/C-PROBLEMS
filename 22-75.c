#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    while (n!=0){
        n=n/10;
        count++;
    }
    printf("no of digits :%d",count);
    
    return 0;
}