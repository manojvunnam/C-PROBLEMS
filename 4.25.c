#include <stdio.h>

int main() {
    char feedback[200];
    int i, count = 0;

    printf("Enter customer feedback: ");
    gets(feedback);

    for (i = 0; feedback[i] != '\0'; i++) {
        if (feedback[i] == ' ' && feedback[i + 1] != ' ')
            count++;
    }

    if (feedback[0] != ' ')
        count++;

    printf("Number of words = %d\n", count);

    return 0;
}
