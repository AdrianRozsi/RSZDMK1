#include <stdio.h>
<<<<<<< HEAD


void PrintResult(int res)
{
printf("Result: %d\n", res);
}

int Calculation(int 3, int 8)
=======
int Calculation(int a, int b)
>>>>>>> branch1
{
if(a > b)
return a - b;
else
return b + a;
}
int main()
{
int a = 5;
int b = 4;
int c;
if(a > b)
c = a - b;
else
c = b - a;
printf("Result: %d\n", c);
return 0;
}