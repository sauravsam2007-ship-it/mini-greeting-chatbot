
#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    char inp[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Hello %s! Nice to meet you.\n", name);

    printf("Do you want to ask me something?\n");
    printf("If yes, ask in a few words: ");

    fgets(inp, sizeof(inp), stdin);

    printf("You asked: %s\n", inp);
    printf("Sorry, I can't answer that yet!\n");

    return 0;
}
