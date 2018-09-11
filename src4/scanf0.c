// Gets an int from user using scanf

#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x); // address of a variable
    printf("x: %i\n", x);
}