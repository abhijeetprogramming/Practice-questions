/*
demo on user edefined functions
simple calc prog
*/

#include<stdio.h>

int addition(int,int);
int sub(int, int);
int mul(int, int);

int main() 
{
    int v1,v2;
    int result=0;

    printf("\nEnter the two values");
    scanf("%d%d",&v1,&v2);
    
    result = addition(v1,v2);

    printf("\nAddition of %d + %d = %d",v1,v2,result);

    printf("\n\n");
    return 0;
}

 // First code  calculator using function


#include <stdio.h>

// Function declaration
int addition(int, int);
int mul(int, int);

int main() {
    int v1, v2, result_addition, result_mul;

    // Getting user input
    printf("\nEnter the two values: ");
    scanf("%d%d", &v1, &v2);

    // Calling addition function
    result_addition = addition(v1, v2);

    // Calling mul function
    result_mul = mul(v1, v2);

    // Printing results
    printf("\nAddition of %d and %d is %d\n", v1, v2, result_addition);
    printf("Multiplication of %d and %d is %d\n\n", v1, v2, result_mul);

    return 0;
}

// Function definition for addition
int addition(int a, int b) {
    return a + b;
}

// Function definition for multiplication
int mul(int a, int b) {
    return a * b;
}

/*
#include <math.h>
#include <stdio.h>
 
// Driver code
int main()
{
  double Number;
  Number = 49;
 
  // Computing the square root with 
  // the help of predefined C 
  // library function
  double squareRoot = sqrt(Number);
   
  printf("The Square root of %.2lf = %.2lf", 
          Number, squareRoot);
  return 0;
}
*/

/*

demo on user defined functions
simple calc prog
*/
#include<stdio.h>

int addition(int,int);
int sub(int,int);
int mul(int, int);

void banner();
void print_dots(int, char);

int dispMenu();

int main()
{
    int v1,v2;
    int result=0;
    int c;

    banner();
    c = dispMenu();
    printf("\nEnter the two values: ");
    scanf("%d%d",&v1,&v2);
    // switch (dispMenu())
    switch(c)
    {
        case 1:
            result = addition(v1,v2);

            printf("\nAdditon of %d + %d = %d",v1,v2,result);
            print_dots(41,'*');
    
            break;
        case 2:
            
            result = sub(v1,v2);

            printf("\nSub of %d - %d = %d",v1,v2,result);
            print_dots(41,'*');
    
            break;
        default:
            printf("\nEnter the correct choice\n");
            break;
    }
    
    printf("\n\n");
    return 0;

}

void banner()
{
    printf("\n========================================\n");
    printf("\n\tSimple calculator\n");
    printf("\n========================================\n");
    
}

int dispMenu()
{
    int ch;
    printf("\nPress,");
    printf("\n1. Add");
    printf("\n2. Sub");
    printf("\n3. Mul");
    printf("\n4. Div");
    printf("\nChoice: ");
    scanf("%d",&ch);
    return ch;
    
}

void print_dots(int n, char ch)
{
    int it;
    printf("\n");
    for(it=0;it<n;it++)
        putchar(ch);
    printf("\n");
}

int addition(int val1, int val2)
{
    int res = 0;
    res = val1+val2;
    return res;
}

int sub(int val1, int val2)
{
    int res = 0;
    res = val1-val2;
    return res;
}

int mul(int val1, int val2)
{
    int res = 0;
    res = val1*val2;
    return res;
}