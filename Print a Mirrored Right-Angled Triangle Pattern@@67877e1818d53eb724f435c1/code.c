#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int row;
    scanf("%d",&row);
    int space=row-1;
    for(int i=1;i<row;i++){
        for(int j=1;j<space;j++){
            printf("1");
        }
        space--;
        printf("\n");
    }
}