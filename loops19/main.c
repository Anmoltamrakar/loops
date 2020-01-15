//19. Write a program in C to find if a number is prime or not.


#include <stdio.h>


int main()

{
    int x, y, num = 0;


    printf("\n\n\t\tEnter a positive integer: ");

    scanf("%d", &x);

    for (y = 2; y <= x / 2; ++y)

    {
        if (x % y == 0) {
            num = 1;
            break;
        }
    }


    if (x == 1)
    {
        printf("\n\n\t\t1 is neither prime nor composite.\n\n");
    }
    else {
        if (num == 0)
            printf("\n\n\t\t%d is a prime number.\n\n", x);
        else
            printf("\n\n\t\t%d is not a prime number.\n\n", x);
    }
    return 0;
}
