//Q7. Write a program in C language to print all the lowercase letters.
#include <stdio.h>
#include <stdlib.h>

int main(){
    char i;
    system("cls");
    for(i='a';i<='z';i++){
        printf("%c\t",i);
    }
    return 0;
}