#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[256],hobby[256];
    int age;
    scanf("%s %d %s",&name,&age,%hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
}