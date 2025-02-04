#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int row;
    scanf("%d",&row);

    int spaces=row-1;
    for(int i=1;i<=row;i++){
        //spaces
        for(int j=1;j<=spaces;j++){
            printf("1");
        }
        spaces--;
        printf("\n");
    }
}