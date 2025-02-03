#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);

    char arr[n][n]={};
    int rowStart=0,colStart=0,rowEnd=n-1,colEnd=n-1;

    while(rowStart<=rowEnd && colStart<=colEnd){
        for(int i=colStart;i<=colEnd;i++){
            arr[rowStart][i]='*';
        }
        rowStart++;
        for(int i=rowStart;i<=rowEnd;i++){
            arr[i][colEnd]='*';
        }
        colEnd--;
        for(int i=colEnd;i>=colStart;i--){
            arr[rowEnd][i]='*';
        }
        rowEnd--;
        for(int i=rowEnd;i>=rowStart;i--){
            arr[i][colStart]='*';
        }
        break;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]=='\0')
            printf(" ");
            else
            printf("%c",arr[i][j]);
        }
        printf("\n");

    }
}