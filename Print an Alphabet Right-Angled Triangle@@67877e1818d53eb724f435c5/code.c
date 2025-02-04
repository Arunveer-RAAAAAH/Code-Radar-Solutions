#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int row;
    scanf("%d",&row);

    char a='A';
    for(int i=1;i<row;i++){
        for(int j=0;j<=i;j++){
            printf("%c",a+j);
        }
        printf("\n");
    }
}