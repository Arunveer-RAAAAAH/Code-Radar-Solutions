#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char word1,word2;
    scanf("%s %s",&word1,&word2);
    printf("You entered: %s and %s",word1,word2);
}