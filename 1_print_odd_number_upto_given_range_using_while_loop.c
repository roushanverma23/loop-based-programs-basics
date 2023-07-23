//Q1. Write a program in C language for printing all the odd numbers within a given range using the while loop.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i=1;
    system("cls");
    printf("\nEnter your range\t");
    scanf("%d",&n);
    while (i != n)
    {
        if(i%2==1){
            printf("%d\t",i);
        }
        i = i+1;
        
    }
    
    return 0;
}