#include <stdio.h>
#include <stdlib.h>   // For atoi()

unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main(int argc, char* argv[])
{
    unsigned int loop = 10;  // Default limit

    if (argc == 2)
        loop = atoi(argv[1]);

    while (loop--) {
        printf("Factorial of number %u is %u\n",
               loop,
               factorial(loop));
    }

    return 0;
}

