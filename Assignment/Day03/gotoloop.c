// Print the 2s table using goto

#include<stdio.h>

int main()
{
    int i = 1;
    
    // Using goto for iteration
    loop:
    printf("2 * %d = %d\n",i,2 * i);
    i++;
    if(i <= 10)
    goto loop;

    return 0;
}