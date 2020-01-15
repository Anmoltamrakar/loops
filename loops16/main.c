//16. Write a program in C to display the n terms of square natural number and
//  their sum. Take the value of n from the user.

#include <stdio.h>



int main()

{

   int n;

   int sum = 0;


   printf("\n\n\t\tEnter the number of terms\n");
   scanf("%d",&n);

   for (int i=1; i <= n; i++)

   sum += (i * i);


printf("\n\n\t\tsquare upto %d terms is %d\n",n,sum);


return 0;


}
