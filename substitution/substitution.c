#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[]){
    if (argc != 2){
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else{
        if (strlen(argv[1]) != 26){
            printf("Key must contain 26 characters.\n");
            return 1;
        }
        for(int i = 0, h = strlen(argv[1]); i < h; i++){
            if (!isalpha(argv[1][i])){
                printf("Key must contain 26 characters.\n");
                return 1;
            }
        }
        for(int i = 0, h = strlen(argv[1]); i < h - 1; i++){
            for (int j = i+1; j < h; j++){
                if (argv[1][i] == argv[1][j]){
                    printf("Key must contain 26 characters.\n");
                    return 1;
                }
            }
        }
        for (int i = 0, h = strlen(argv[1]); i < h; i++){
            argv[1][i] = toupper(argv[1][i]);
        }
        string plaintext = get_string("plaintext: ");
        for (int i = 0, h = strlen(plaintext); i < h; i++){
            if (isalpha(plaintext[i])){
                if (islower(plaintext[i])){
                   plaintext[i] = tolower(argv[1][plaintext[i] - 97]);
                }
                else{
                    plaintext[i] = toupper(argv[1][plaintext[i] - 65]);
                }
            }
        }
        printf("ciphertext: %s\n", plaintext);
    }

}
