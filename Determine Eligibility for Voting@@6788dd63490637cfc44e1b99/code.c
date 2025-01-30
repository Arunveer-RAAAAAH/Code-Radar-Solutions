#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%d",&a);
    a>=18?printf("Eligible"):printf("Not Eligible");
}