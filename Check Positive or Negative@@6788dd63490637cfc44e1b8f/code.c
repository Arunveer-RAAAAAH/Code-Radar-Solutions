#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a>0)
    printf("Positive");
    if(a<0)
    printf("Negative");
    if(a==0)
    printf("Zero");
}