#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char word[256];
   scanf("%s",&word);
   printf("You entered: %s",word);
}