#include <stdio.h>
#include <string.h>

int main() {
    
    char word[] = "pink";
    char display[] = "____";
    char guess;
    int i;
    int attempts;
    int correct;

    printf("Simple Hangman Game \n");

    for (attempts = 5; attempts > 0; attempts--) {
        correct = 0;

        printf("\n word: %s\n", display);

        printf("enter a letter: ");
        scanf("%c", &guess);

        for (i = 0; i < strlen(word); i++) {
            if (word[i] == guess) {
                display[i] = guess;
                correct = 1;
            }
        }

        if (correct) {
            printf("correct yay!\n");
        } else {
            printf("wrong haha!\n");
        }

        if (strcmp(word, display) == 0) {
            printf("\n you won yayyyyyyyy! the word is: %s\n", word);
            return 0;
        }

        printf("attempts left: %d\n", attempts - 1);
    }

    printf("\n game over loser! the word is: %s\n", word);

    return 0;
}