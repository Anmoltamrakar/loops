//3. Write a program in C to display n terms of natural number and their sum.
//  The value of n will be given by the user during
//  runtime.


#include <stdio.h>


int main()

{

   int x,n,sum=0;
   printf("\n\n\t\tInput Value of terms : ");

   scanf("%d",&n);

   printf("\n First %d natural numbers are:\n",n);

   for(x=1;x<=n;x++)
   {

     printf("\n\n\t\t%d ",x);

     sum+=x;
   }
   printf("\n\n\t\tThe Sum of natural numbers upto %d terms : %d \n",n,sum);

}
