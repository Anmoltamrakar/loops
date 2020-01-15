//6. Write a program in C to display the multiplication table of a given integer.


#include <stdio.h>

int main()


{

    int n,y,x;

    printf("\n\n\t\tEnter a number\n");
    scanf("%d",&n);

   for(y=1;y<=10;y++)
     { x=n*y;


   printf("\n\n\t\t%d * %d = %d\n",n,y,x);

   }


    return 0;
}
