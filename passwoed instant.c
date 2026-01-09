#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    int i, score = 0;
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter your password: ");
    scanf("%s", password);

    if (strlen(password) >= 8)
        score++;

    for (i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            upper = 1;
        else if (password[i] >= 'a' && password[i] <= 'z')
            lower = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            digit = 1;
        else
            special = 1;
    }

    score = score + upper + lower + digit + special;

    printf("\nPassword Strength: ");

    if (score <= 2)
        printf("WEAK");
    else if (score <= 4)
        printf("MEDIUM");
    else
        printf("STRONG");

    return 0;
}