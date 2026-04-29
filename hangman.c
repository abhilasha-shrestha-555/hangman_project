#include <stdio.h>
#include <string.h>

int main (){

    int i;
    int attempts=5;
    int correct;
    char word[]="pink";
    char display[]="____";
    char guess;

    printf ("\nhangman game\n");

    for (attempts=5; attempts>0; attempts--){
    correct=0;

        printf ("\nword: %s\n", display);

        printf ("enter a letter: ");
        scanf (" %c", &guess);

        for (i=0; i<strlen (word); i++){
            if (word [i]==guess){
            display [i]=guess;
            correct=1;
            }
        }

         if (correct){
        printf ("correct yayy! \n");
        }
        else {
         printf ("wrong haha! \n");
        }

        if (strcmp (word,display)==0){
        printf ("YOU WON WOOHOO!!\nthe word is: %s\n", word);
        return 0;
        }

         printf ("attempts left: %d\n", attempts);  
    }

 printf ("GAME OVER LOSER BOO!\nthe word is: %s\n", word);
 return 0;
} 