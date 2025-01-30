#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("Average: %.2f",(float)((a+b+c)/3));
}