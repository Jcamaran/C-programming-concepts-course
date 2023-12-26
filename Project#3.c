#include <stdio.h>
#include <string.h>

int Fstring(const char *str1, const char *str2, int *index) {
    const char *ptr = strstr(str1, str2);
    if (ptr != NULL) {
        *index = ptr - str1;
        return 1; // Found
    } else {
        return 0; // Not found
    }
}

int main() {
    const int maxLength = 75;
    char string1[maxLength];
    char string2[maxLength];

    printf("Enter the first string: ");
    fgets(string1, maxLength, stdin);

    // Remove the newline character at the end of the first string
    size_t len1 = strlen(string1);
    if (len1 > 0 && string1[len1 - 1] == '\n') {
        string1[len1 - 1] = '\0';
    }

    printf("Enter the second string: ");
    fgets(string2, maxLength, stdin);

    // Remove the newline character at the end of the second string
    size_t len2 = strlen(string2);
    if (len2 > 0 && string2[len2 - 1] == '\n') {
        string2[len2 - 1] = '\0';
    }

    int index;
    int found = Fstring(string1, string2, &index);

    if (found) {
        printf("The Function returns TRUE, index of %d\n", index);
    } else {
        printf("The Function returns FALSE\n");
    }

    return 0;
}

