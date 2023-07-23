// Q2. Write a program to print even numbers within a range in C language using the while loop.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i=1;
    system("cls");
    printf("\nEnter your range\t");
    scanf("%d",&n);

    while (i != n)
    {
        if (i%2==0)
        {
            printf("%d\t",i);
        }
        i = i + 1;
        
    }
    

    return 0;
}