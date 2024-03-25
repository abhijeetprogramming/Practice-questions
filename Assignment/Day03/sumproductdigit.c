/*
Write a program to read Sum and Product of digits in a given number

Input Format:
Read a positive integer N

Output Format:
Print the Sum and Product of digits of the number

Examples: 
Input: N=12
Output:
sum=3
product = 2.

Input N = 1012
Output:
Sum = 4
Product = 2
*/

#include<stdio.h>

int main()
{
    int N,digit,sum=0,product=1;

    printf("Enter a positive integer: ");
    scanf("%d",&N);

    int originalNumber = N;
    while(N>0) {
        digit = N % 10;
        sum +=digit;
        if(digit != 0)
        product *= digit;
        N /= 10;
    }
    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}