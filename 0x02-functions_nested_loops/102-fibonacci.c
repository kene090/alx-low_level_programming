/*
 * File: 102-fibonacci.c
 * Auth: Vincent Kip
 */

#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting from 1 and 2,
 *        followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    unsigned long int fib1 = 1;
    unsigned long int fib2 = 2;
    unsigned long int fib_next;

    printf("%lu, ", fib1);
    printf("%lu, ", fib2);

    for (i = 3; i <= 50; i++)
    {
        fib_next = fib1 + fib2;
        printf("%lu", fib_next);

        if (i != 50)
            printf(", ");

        fib1 = fib2;
        fib2 = fib_next;
    }

    printf("\n");

    return (0);
}
