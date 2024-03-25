/*
demo on command line arguments
argc => integer argument count (no of args)
argv=> 2d array of strings which can hold number of strings in it

2d array of chars
char stdNames[50][100];
50-> no of students
100-> lenght of each name of students

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int sum=0, a,b;
    printf("\nNo of args passed through cmd line: %d", argc);
    if(argc != 3)
    {
        printf("\nPlease check the no of args");
        exit(0);
    }
    for(i=0;i<argc;i++)
    {
        printf("\nargv[%d] = %s",i,argv[i]);
    }
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    sum = a+b;
    printf("\nSum = %d\n",sum);
    printf("\n\n");
    return 0;
}







// #include<stdio.h>

// void dispList(int [], int);
// void sortDesending(int [], int);

// int main(){
//     int arr[]= {10,1,3,5,2,8,9,22};
//     int Size = sizeof(arr)/sizeof(arr[0]);

//     printf("Original array:\n");
//     dispList(arr,Size);

//     sortDesending(arr,Size);

//     printf("\nSorted array in desending order:\n");
//     dispList(arr, Size);

//     printf("\n%d\n\n",arr[3]);

//     return 0;
// }

// void dispList(int a[],int n) {
//     for(int i=0;i<n;i++)
//     printf("%d->",a[i]);
//     printf("\n");
// }

// void sortDesending(int a[], int n)
// {
//     for(int i=0; i<n; i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]<a[j]){
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
// }

