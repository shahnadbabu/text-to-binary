#include <stdio.h>
#include <string.h>

void binaryRepresentation(char *input) {
    int i;
    for (i = 0; i < strlen(input); i++) {
        unsigned char c = input[i];
        printf("%08b ", c);
    }
    printf("\n");
}

void hexadecimalRepresentation(char *input) {
    int i;
    for (i = 0; i < strlen(input); i++) {
        unsigned char c = input[i];
        printf("%02x ", c);
    }
    printf("\n");
}

int main() {
    char input[100];
    int a;

    do {
        printf("What operation do you want?\n");
        printf("1. Binary code\n");
        printf("2. Hexadecimal code\n");
        printf("3. Both\n");
        printf("4. Exit\n");
        scanf("%d", &a);

        if (a == 4) {
            break;
        }

        printf("Enter a string: ");
        scanf("%99s", input);
        input[strcspn(input, "\n")] = 0; // remove newline character

        if (a == 1) {
            printf("\n\tBinary Representation: ");
            binaryRepresentation(input);
        } else if (a == 2) {
            printf("\n\tHexadecimal Representation: ");
            hexadecimalRepresentation(input);
        } else if (a == 3) {
            printf("\n\tBinary Representation: ");
            binaryRepresentation(input);
            printf("\n\tHexadecimal Representation: ");
            hexadecimalRepresentation(input);
        }
    } while (a != 4);

    return 0;
}
