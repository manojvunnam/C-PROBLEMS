#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    if (isalpha(sentence[0])) {
        sentence[0] = toupper(sentence[0]);
    }
    printf("Formatted sentence: %s", sentence);

    return 0;
}
