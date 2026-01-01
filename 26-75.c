#include <stdio.h>
int main() {
    int n,temp,i;
    scanf("%d",&n);
    int first=0;
    int second=1;
    for (i=2;i<n;i++){
if (i<=1){
temp=i;}
else{
temp=first+second;
first=second;
second=temp;
}
printf("%d",temp);
    }
    return 0;
}