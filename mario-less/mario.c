#include <stdio.h>
#include<cs50.h>

int main(void){
    int height;
    do {height = get_int("Height: ");}
    while(height <= 0);
    for(int row = 1; row <= height; row++){
        for(int column = 1; column <= height - row; column++){
            printf(" ");
        }
        for (int brick = row; brick > 0; brick--){
            printf("#");
        }
        printf("\n");
    }
}
