//find hangman in c.
// Source: https://stackoverflow.com/a/28088149 .
#include <stdio.h>            
 int main() {
int correct = 0;
int mistake = 0;
int number = 0;
char name[20];
char Word[]={'i','n','f','o','r','m','a','t','i','k'};
char guessStatus[]={'_','_','_','_','_','_','_','_','_','_','\0'};
char guess;
printf("##### Welcome to Hangman #####\nWhat is your Name?\n");
scanf(" %s", name);
getchar(); // add this line
printf("Hello %s!\n", name);                                                                               
   while (mistake <=10 && number<10) {
    printf("Guess a letter: ");
    guess = getchar();
    printf("%c", guess);
    correct = 0;
    for (int search=0; search<10; search++)
    {                                                


        if (guess == Word[search]){
            number++;
            guessStatus[search] = Word[search];
            correct = 1;
        }
    }
    if (correct == 0){
        mistake++;
        printf("%c is wrong!\nYour Status is: %s\nYou have %i tries left\n", guess,guessStatus,10-mistake);
    }
        else {
            printf("Good job %s!\nYour Status is: %s\nYou have %i tries left\n", name,guessStatus,10-mistake);
        }
}
}
