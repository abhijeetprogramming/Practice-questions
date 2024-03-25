/*
demo on exit controlled looping st


do{
    body of the loop
}while(cond);

*/



// looping 
// require 4 steps

// 1. initialize the variables/counters
// 2. block of statements ti be executed repeatedly
// 3. counter
// 4. condition

/*
 while (cond)
 {
    body of the loop
 }

*/

#include<stdio.h>

int main()
{
    int it=1;
    int tab;
    printf("\nEnter the number: ");
    scanf("%d",&tab);
    do{
        printf("\n%d X %d= %d", tab, it,(tab*it));
        it++;
    }  while (it <= 10);

    printf("\n\nDone!\n\n");
    return 0;
} 