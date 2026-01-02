#include <stdio.h>
#include <string.h>

void reverseString(char str[], char rev[]) {
    int length = strlen(str);
    int i;

    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0';
}

int checkPalindrome(char str[], char rev[]) {
    if (strcmp(str, rev) == 0)
        return 1;
    else
        return 0;
}

int main() {
    char str[100], rev[100];

    printf("----- Palindromic String Analyzer -----\n\n");

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    reverseString(str, rev);

    printf("\nOriginal String : %s", str);
    printf("\nReversed String : %s\n", rev);

    if (checkPalindrome(str, rev))
        printf("\nResult: The given string is a PALINDROME.\n");
    else
        printf("\nResult: The given string is NOT a palindrome.\n");

    printf("\n--------------------------------------\n");
    printf("Mini Project by Ansh Tiwari (IBM)\n");

    return 0;
}
