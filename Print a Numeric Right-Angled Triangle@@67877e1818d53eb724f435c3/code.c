#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int row;
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}