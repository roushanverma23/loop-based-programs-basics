// Q6. Write a program in C language to print all the uppercase letters.
#include <stdio.h>
#include <stdlib.h>

int main(){
    char i;
    system("cls");
    for(i='A';i<='Z';i++){
        printf("%c\t",i);
    }
    return 0;
}