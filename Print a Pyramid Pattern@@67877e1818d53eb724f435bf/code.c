#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int rows;
    scanf("%d",&rows);
    int space=row-1;
    for(int i=1;i<row;i++){
        for(int j=1;j<space;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        space--;
        printf("\n");
    }
}