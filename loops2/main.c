//2. Write a C program to find the sum of first 10 natural numbers.

#include <stdio.h>

int main()


{
    int sum=0;

   for(int i=1;i<=10;i++)
   {

    sum+=i;

   }

   printf("\n\n\t\tThe sum of first 10 natural numbers is \t %d\n",sum);



    return 0;
}
