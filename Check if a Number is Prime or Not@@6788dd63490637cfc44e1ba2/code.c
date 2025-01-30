#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    bool flag=1;
    for(int i=2;i<a;i++){
        if(a%i==0){
            flag=0;
            break;
        }
    }
    if(flag)
    printf("Prime");
    else
    printf("Not Prime");
}