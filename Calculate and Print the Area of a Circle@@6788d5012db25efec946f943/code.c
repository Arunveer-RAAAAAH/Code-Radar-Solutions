#include <stdio.h>
#define PI 3.14
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   float radius;
   scanf("%f",&radius);
   printf("Area: %.2f",PI*radius*radius);
}