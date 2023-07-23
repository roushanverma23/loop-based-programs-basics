// Q3. Print all the numbers within a range.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i=0;
    system("cls");
    printf("\nEnter your range\t");
    scanf("%d",&n);

    while (i-1 != n)
    {
        printf("%d\t",i);
        i = i + 1;
    }

    return 0;
    
}