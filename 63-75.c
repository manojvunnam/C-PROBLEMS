#include <stdio.h>
int main() {
    int a,b,i,j,count;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("number between %d and %d:\n",a,b);
    for(i=a;i<=b;i++){
        if(i<=1)
    continue;
    count=0;
    for(j=1;j<=i;j++){
        if(i%j==0)
        count++;
    }
    if(count==2)
    printf("%d ",i);
    }
    return 0;
}