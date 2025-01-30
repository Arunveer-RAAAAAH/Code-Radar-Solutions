#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);

    switch(a){
        case a>=90:
        printf('A');
        case a>=80 && a<90:
        printf('B');
        case a>=70 && a<80:
        printf('C');
        case a>=60 && a<70:
        printf('D');
        case a<60:
        printf('F');
    }
}