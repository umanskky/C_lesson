#include <stdio.h>

int sum(int a, int b);

int main(){
    int c = 0;
    
    c = sum(4, 3);
    printf("Hallo Umanskky 1987 c = %d" , c);
}

int sum(int a, int b){
    int c = a+b;
    return c;
}