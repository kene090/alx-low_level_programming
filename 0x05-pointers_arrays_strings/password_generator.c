#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    // Define the necessary variables
    int pass[101]; // Assuming the password length is 101 characters
    int i;

    // Seed the random number generator
    srand(time(NULL));

    // Generate random characters for the password
    for (i = 0; i < 100; i++)
    {
        pass[i] = rand() % 94 + 33; // ASCII printable characters range from 33 to 126
        putchar(pass[i]);
    }

    // Add a null terminator to the end of the password
    pass[100] = '\0';

    // Print the generated password
    printf("\n");

    return 0;
}
