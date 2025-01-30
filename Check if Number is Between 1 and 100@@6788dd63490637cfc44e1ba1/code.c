#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    a<=100 && a>=1?printf("In Range"):printf("Out of Range");
}