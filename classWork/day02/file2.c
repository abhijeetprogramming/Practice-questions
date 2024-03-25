/*
demo on unformatted io sts

getc(), getchar()=> scan for signal chars
fgetc()
putc(), fputc()=>print signal char on outputs

gets()=>scan the strings

puts()=>print the strings on outputs

*/

// #include <stdio.h>

// int main()
// {
//     char ch;
//     // ch=getchar();
//     // printf("\nread character from stdin is: %c", ch);
//     // putchar(ch);

//     ch=getc(stdin);
//     putc(ch,stdout);

//     printf("\n\n");
//     return 0;

//     printf("\n\n");
//     return 0;
// }

#include<stdio.h>

int main()
{

char str1[20];

puts("\nEnter a string: ");
gets(str1);

puts(str1);
printf("\n\n");

return 0;

}