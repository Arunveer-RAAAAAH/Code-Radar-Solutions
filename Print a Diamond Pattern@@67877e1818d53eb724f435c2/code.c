#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int row;
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        //spaces
        for(int j=row-1;j>=0;j--){
            printf("1");
        }
        printf("\n")
    }
}