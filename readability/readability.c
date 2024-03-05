#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void){
    float index, L, S;
    float letters = 0, words = 1, sentences = 0;
    char *text = get_string("Text: ");
    for (int i =0, h = strlen(text); i < h; i++){
        if (text[i] == '.' || text[i] == '!' || text[i] == '?'){
            sentences+=1;
        }
        if (text[i] == ' '){
            words+=1;
        }
        if (isalpha(text[i])){
            letters+=1;
        }
    }
    L = letters / words * 100;
    S = sentences / words * 100;
    printf("%f %f\n", L, S);
    index = 0.0588 * L - 0.296 * S - 15.8;

    if (index >= 16){
        printf("Grade 16+\n");
    }
    else if (index < 1) {
        printf("Before Grade 1\n");
    }
    else{
        printf("Grade %i\n", (int)round(index));
    }
}
