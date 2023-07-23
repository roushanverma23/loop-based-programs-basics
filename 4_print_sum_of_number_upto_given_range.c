// Q4. Write a program in C language to print the addition of numbers within a range.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0,n,sum=0;
    system("cls");
    printf("\nEnter your range\t");
    scanf("%d",&n);

    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("\nSUM = %d",sum);
    return 0;
}