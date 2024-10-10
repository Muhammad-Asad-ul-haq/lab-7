#include <stdio.h>

int main() {
    char name[100], email[100], phone[20];
    int i, validName, validEmail, validPhone;

    printf("Enter your name: ");
    scanf("%s", name);

    validName = 1;
    for (i = 0; name[i] != '\0'; i++) {
        if ((name[i] < 'A' || (name[i] > 'Z' && name[i] < 'a') || name[i] > 'z') && name[i] != ' ') {
            validName = 0;
            break;
        }
    }

    printf("Enter your email: ");
    scanf("%s", email);

    validEmail = 1;
    int atFound = 0, atPosition = -1;
    for (i = 0; email[i] != '\0'; i++) {
        if ((email[i] >= 'A' && email[i] <= 'Z') || (email[i] >= 'a' && email[i] <= 'z') || (email[i] >= '0' && email[i] <= '9') || email[i] == '.' || email[i] == '_' || email[i] == '-') {
        } else if (email[i] == '@') {
            if (atFound) {
                validEmail = 0;  // More than one '@' is invalid
                break;
            }
            atFound = 1;
            atPosition = i;
        } else {
            validEmail = 0;  // Invalid character found
            break;
        }
    }

    if (atFound) {
        if (atPosition == 0 || email[atPosition + 1] == '\0') {
            validEmail = 0;  // '@' cannot be at the start or end
        }
    } else {
        validEmail = 0;  // No '@' symbol found
    }

    printf("Enter your phone number: ");
    scanf("%s", phone);

    validPhone = 1;
    if (phone[0] == '+') {
        i = 1;
    } else {
        i = 0;
    }
    for (; phone[i] != '\0'; i++) {
        if ((phone[i] < '0' || phone[i] > '9') && phone[i] != ' ' && phone[i] != '-') {
            validPhone = 0;
            break;
        }
    }

    if (!validName) {
        printf("Invalid name! Only alphabetic characters and spaces are allowed\n");
    } else {
        printf("Valid name: %s\n", name);
    }

    if (!validEmail) {
        printf("Invalid email! Ensure it contains only valid characters, includes exactly one '@' symbol, and '@' is not at the start or end\n");
    } else {
        printf("Valid email: %s\n", email);
    }

    if (!validPhone) {
        printf("Invalid phone number! Only digits, spaces, hyphens, and an optional '+' at the start are allowed\n");
    } else {
        printf("Valid phone number: %s\n", phone);
    }

return 0;
}
