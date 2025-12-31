#include <stdio.h>
int main() {
    int n,reverse,reminder,real;
    scanf("%d",&n);
    reverse=0;
    real=n;
    while(real !=0){
        reminder=real%10;
        reverse=reverse*10+reminder;
        real=real/10;
    }
    if (n == reverse){
    printf("palindrom");
   } else{
    printf("not a palindrom");
   }
    return 0;
}