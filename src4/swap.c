// Fails to swap two integers

#include <cs50.h>
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y); // find/get-me-the-address of x , find/get-me-the-address of y
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    eprintf("a is %i, b is %i\n", a, b);
    int tmp = *a; // go to the address of a
    *a = *b; // go to the address of a, set it to the go-to-address of b
    *b = tmp;
    eprintf("a is %i, b is %i\n", a, b);
}