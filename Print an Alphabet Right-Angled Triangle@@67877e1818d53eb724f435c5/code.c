#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int row;
    scanf("%d",row);

    char a;
    for(int i=0;i<row;i++){
        for(int j=1;j<=i;j++){
            printf("%c",a++);
        }
        printf("\n");
    }
}