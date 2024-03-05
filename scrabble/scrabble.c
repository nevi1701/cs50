#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int score(string player);

int main(void){
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");
        int player1_score = score(player1);
        int player2_score = score(player2);
        if (player1_score > player2_score){
            printf("Player 1 wins!\n");
        }
        else if (player1_score == player2_score){
            printf("Tie!\n");
        }
        else{
            printf("Player 2 wins!\n");
        }

    }
int score(string player){
    int total = 0;
    for(int i = 0, h = strlen(player); i < h; i++){
            if (isalpha(player[i])){
                total += POINTS[toupper(player[i]) - 'A'];
                            }
        }
    return total;
}

