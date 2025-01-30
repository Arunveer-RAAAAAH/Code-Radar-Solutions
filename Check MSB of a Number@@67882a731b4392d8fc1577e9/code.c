#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    a>>(sizeof(a)*8-1) & 1?printf("Set"):printf("Not Set");
}