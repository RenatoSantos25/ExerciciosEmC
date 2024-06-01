#include <stdlib.h>
int main() {
    short a = 0;
    short b = 0;
printf("Insira 1 numero\n");
scanf("%hd", &a);
printf("Insira outro numero\n");
scanf("%hd", &b);

if (a % b ==0 || b % a == 0)
{
printf("Sao multiplos");
}
else{
    printf("Nao sao multiplos");
}
}