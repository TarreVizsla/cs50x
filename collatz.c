#include <stdio.h>
#include <cs50.h>

int steps = 0;

int collatz(int num) {
//    int steps = 0;
/*
    if (num == 1)
        steps++;
    else
        if (num % 2 == 0)
        {
            printf("num is %d which is even\n", num);
            steps += collatz(num/2);
            printf("steps is %d\n", steps);

        }
        else
        {
            printf("num is odd\n");
            steps += collatz((3*num)+1);
            printf("steps is %d\n", steps);

        }

    printf("after if-else-if-else num is %d and steps is %d \n", num, steps);
    return steps;
    */
    // base case
    if (num == 1)
        return 0;
    // even numbers
    else if ((num % 2) == 0)
        return 1 + collatz(num/2);
    // odd numbers
    else
        return 1 + collatz(3*num + 1);
}

int main() {
    int total_steps = 0;

//    total_steps = collatz(4);
       total_steps = collatz(7);

    printf("%d", total_steps);
}