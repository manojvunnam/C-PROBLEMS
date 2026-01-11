#include <stdio.h>
#include <string.h>
int main() {
    char c[30];
    char a[30];
fgets(c,30,stdin); 
size_t len=strlen(c);
if(len>0&&c[len-1]=='\n'){
    c[len-1]='\0';
len--;}
int index=0;
for(int i=len-1;i>=0;i--){
    a[index]=c[i];
    index++;
}a[index]='\0';
int rev=strcmp(c,a);
if(rev==0){
    printf("Palindrome");
}else{
    printf("Not a  palindrome");
}
return 0;
}
