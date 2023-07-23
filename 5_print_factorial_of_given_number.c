// Q5. Write a program in C language to print the factorial of a number.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int fact=1,i=1,n;
    system("cls"); // for clear screen vs code
    printf("\nEnter the number\t");
    scanf("%d",&n);

    while (i<=n)
    {
        fact = fact * i;
        i = i + 1;
    }

    printf("\nFactorial %d is: %d",n,fact);
    return 0;
    
}