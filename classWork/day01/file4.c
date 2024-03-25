
// biggest of 3 numbers using ternery operators

// # include<stdio.h>

// int main()
// {
//  int x = 10, y = 20, z;
 
//  z = (1)?x:y;

//  printf("\nz=%d\n",z);

//  return 0;

// }


// # include<stdio.h>

// int main()
// {
//  int x = 101, y = 20, z=301;
//  int res = 0;

//  res = (x>y)?((x>z)?(x):(z)):((y>z)?(y):(z));

//  printf("\nres=%d\n",res);

//  return 0;
// }


// # include<stdio.h>

// struct student
// {
//     int id;
//     char name[20];
// }s1;

// int main()
// {
//  int x = 101, y = 20, z=301;
//  int res = 0;

//  res = (x>y)?((x>z)?(x):(z)):((y>z)?(y):(z));

//  printf("\nres=%d\n",res);

//  printf("\n%d\n",sizeof(++res));

//  printf("\nres = %d\n,res");

//  return 0;
// }

# include<stdio.h>

struct student
{
    int id;
    char name[20];
}s1;

int  func(int val)
{
    return (val);
}

int main()
{
 int x = 101, y = 20, z=301;
 int res = 0;

 res = (x>y)?((x>z)?(x):(z)):((y>z)?(y):(z));

 printf("\nres=%d\n",res);

 printf("\n%d\n",sizeof(++res));

 printf("\nres = %d\n,res");

 return 0;
}