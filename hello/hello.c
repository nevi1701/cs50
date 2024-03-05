#include <stdio.h>
#include <cs50.h>

int main(void){
    string answer = get_string("what's ur name? ");
    printf("hello, %s\n", answer);
}
