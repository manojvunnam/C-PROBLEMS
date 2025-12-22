#include <stdio.h>
int main() {
    int s;
    scanf("%d",&s);
    printf("s:%d",s);
    if(s>=50000){
  int  tax=(s/100)*10;
    s=s-tax;
    printf("s:%d",s);}
    else{
    printf("no tax");}
    return 0;
}