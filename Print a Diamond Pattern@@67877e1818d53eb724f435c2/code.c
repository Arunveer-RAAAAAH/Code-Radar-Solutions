#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int row;
    scanf("%d",&row);

    int spaces=row-1;
    int k;
    //part 1
    for(int i=1;i<=row;i++){
        //spaces
        for(int j=1;j<=spaces;j++){
            printf(" ");
        }
        //printing
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        spaces--;
        printf("\n");
    }

    //part 2
    for(int i=row;i>=1;i--){
        for(int j=row;j>i;j--){
            printf("1");
        }
        for
        printf("\n");
    }
}