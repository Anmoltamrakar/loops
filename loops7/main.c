//7. Write a program in C to display the n terms of odd natural number and their sum .


#include <stdio.h>


int main()


{

   int x,n,sum=0;


   printf("\n\n\t\tInput number of terms : \n");

   scanf("%d",&n);

   printf("\n\n\t\tThe odd numbers are :");
   for(x=1;x<=n;x++)
   {
     printf("%d ",2*x-1);

     sum+=2*x-1;
   }

   printf("\n\n\t\tSum of odd Natural Number upto %d terms is = %d \n",n,sum);


   return 0;
}
