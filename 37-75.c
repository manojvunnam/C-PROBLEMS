#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
int x=0;
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int target;
scanf("%d",&target);
for(int i=0;i<n;i++){
    if(arr[i] == target){
        x=1;}
}
if(x){
    printf("found");
} else {
    printf("not found");
}
    return 0;
}