#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int row;
    scanf("%d",&row);

    int spaces=row-1;

    //part 1
    for(int i=1;i<row;i++){
        //spaces
        for(int j=1;j<=spaces;j++){
            printf("1");
        }
        //printing
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        spaces--;
        printf("\n");
    }

    //part 2
    for(int i=0;i<row;i++){
        //spaces
        for(int j=1;j<i;j++){
            printf("1");
        }
        for(int k=row+1;k>=2*i-1;k--){
            printf("*");
        }
        printf("\n");
    }
}