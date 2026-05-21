#include<stdio.h>
#include<string.h>
int main() {
    char name[50];
    gets(name);
    printf("Your name is: %s",strupr(name));
    return 0;
}
