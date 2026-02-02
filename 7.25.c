#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    printf("Enter customer name: ");
    fgets(name, sizeof(name), stdin);
    name[0] = toupper(name[0]);
    for (i = 1; name[i] != '\0'; i++) {
        name[i] = tolower(name[i]);
    }

    printf("Formatted Name: %s", name);

    return 0;
}
