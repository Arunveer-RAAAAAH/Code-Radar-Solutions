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
    space=1;
    for(int i=1;i<=row-1;i++){
        for(int j=1;j<=space;j++){
            printf("1");
        }
        space++;
        for(int k=0;k<=2*(row-i);k++){
            printf("*");
        }
        printf("\n");
    }
}