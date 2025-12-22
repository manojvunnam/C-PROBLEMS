#include <stdio.h>
int main() {
    int cost,sell;
    scanf("%d %d",&sell,&cost);
    printf("sell:%d cost:%d\n",sell,cost);
    if(sell>cost)
    printf("profit");
    else
    printf("loss");
    return 0;
}