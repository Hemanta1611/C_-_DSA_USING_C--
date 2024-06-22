/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    // USING FUNCTION
    int generate_random_number(int n){
        srand(time(NULL));
        return rand()%n;
    }
int main(){
    
    // OR
    // srand(time(NULL));
    // printf("The random number between 0 to 100 is %d\n", rand()%100);
    printf("The random number between 0 to 69 is %d\n", generate_random_number(69));

    return 0;
}*/

// ROCK PAPER SCISSORS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int generate_random_number(int n){
        srand(time(NULL));
        return rand()%n;
    }
    int greater(char c1, char c2){
        //for this game returns 1 if c1 > c2 otherwise 0. if c1==c2 then return -1
        if ((c1 == 'r') && (c2 == 's')){
            return 1;
        }
        else if((c2 == 'r') && (c1 == 's')){
            return 1;
        }
        else {
            return 0;
        }
        if ((c1 == 'p') && (c2 == 'r')){
            return 1;
        }
        else if((c2 == 'p') && (c1 == 'r')){
            return 1;
        }
        else{
            return 0;
        }
        if ((c1 == 's') && (c2 == 'p')){
            return 1;
        }
        else if((c2 == 's') && (c1 == 'p')){
            return 1;
        }
        else{
            return 0;
        }
    }
int main(){
    
    int player1score = 0;
    int computer_score = 0;
    int temp;
    char player_char, comp_char;
    char choose[] = {'r', 'p', 's'};

    printf("Welcome to the Rock, Paper , Scissors Game.\n");
    for (int i = 0; i < 3; i++)
    {
        
    printf("Player 1 turns:\n");
    printf("Choose 1 for rock, 2 for paper & 3 for scissors\n");
    scanf("%d", &temp);
    getchar();
// if we don't use getchar than CPU will just take same random value
    player_char = choose[temp-1];
// here we have subtract -1 with temp because in string or array it start with index 0 and we have to choose 1,2 or 3 and it will display from string
    printf("you choose %c \n", player_char);

    printf("Computer turns:\n");
    temp = generate_random_number(3) + 1; // because it will choose 0 or 1 or 2 so we have add +1
    comp_char = choose[temp-1];
    printf("Computer chooses %c \n\n\n", comp_char);


    if(greater(player_char, comp_char ) == 1){
        player1score += 1;
    }
    else if(greater(comp_char, player_char) == -1){
        computer_score += 1;
        player1score += 1;
    }
    else{
        computer_score += 1;
    }
    }
    
    printf("YOUR SCORE: %d & CPU SCORE: %d\n ", player1score, computer_score);

    if (player1score > computer_score){
        printf("YOU WIN THE GAME");
    }
    else if(player1score < computer_score){
        printf("CPU WINS THE GAME");
    }
    else
    printf("ITS DRAW");
    return 0;
}
// 11.20 pm IST 05-03-2023 WOW 