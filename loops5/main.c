//5. Write a program in C to display the cube of the number upto given an integer.


#include <stdio.h>



int main()


{

    int n,x,cube;

    printf("\n\n\t\tEnter the numer upto which you want cube\n");
    scanf("%d",&n);

   for(x=1;x<=n;x++)
     { cube=x*x*x;


   printf("\n\n\t\t%d\n",cube);
}

    return 0;
}
