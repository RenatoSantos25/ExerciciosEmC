#include <stdio.h>

int main(){

short a = 0;
short b = 0;
short c = 0;

printf("Insira um número(a)\n");
scanf("%hd", &a);
printf("Insira um número(b)\n");
scanf("%hd", &b);
printf("Insira um número(c)\n");
scanf("%hd", &c);

if(a > b && a > c)
{
     printf("O maior numero e o a: %hd", a);
}
else if (b > c && b > a)
{
     printf("O maior numero e o b: %hd", b);
}
else
{
 printf("O maior numero e o a: %hd", c);
}
}