#include <stdio.h>

int main() {
    char text[20];

    printf("Enter Text: ");
    scanf("%s", text);

    printf("ECB Encrypted: ");

    for(int i=0;text[i]!='\0';i++)
        printf("%c", text[i]^5);

    return 0;
}