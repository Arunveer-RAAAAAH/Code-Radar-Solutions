#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    a%4==0?printf("Leap Year"):printf("Not a Leap Year");
}