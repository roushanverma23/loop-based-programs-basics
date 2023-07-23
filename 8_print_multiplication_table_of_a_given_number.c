// Q8. Write a program in C language to print the multiplication table of an integer.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    system("cls");
    printf("\nEnter number\t");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("\n%d * %d = %d",n,i,n*i);
        
    }

    return 0;
}