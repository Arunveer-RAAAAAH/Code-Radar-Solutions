#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int row;
    scanf("%d",&row);
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            printf("* ");
        }
        printf("\n");
    }
}