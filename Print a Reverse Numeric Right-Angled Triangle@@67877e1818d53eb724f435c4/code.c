#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int row;
    scanf("%d",&row);

    for(int i=0;i<row;i++){
        for(int j=1;j<=row-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }  
}