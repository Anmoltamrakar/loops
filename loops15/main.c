//15. Write a program in C to display the sum of the n terms of harmonic series .


#include <stdio.h>



int main()


{

   int x,n;

   double s=0.0;

   printf("\n\n\t\tInput the number of terms :\t ");\

   scanf("%d",&n);

   printf("\n\n\n");

   for(x=1;x<=n;x++)
   {

       if(x<n)

       {

     printf("1/%d + ",x);

     s+=1/(double)x;

       }
     if(x==n)
     {

     printf("1/%d ",x);
     s+=1/(double)x;

     }
     }
        printf("\n\n\t\tSum of Series upto %d terms : %lf \n",n,s);
}
