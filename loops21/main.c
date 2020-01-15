//20.Write the progrme in C to display the first 20 terms of fibonaccii series.
//  here is the Fibonacci series upto to 10 times
//  : 0 1 1 2 3 5 8 13 21 34


#include <stdio.h>


int main()


{

    int x,y;


    int var1=0,var2=1,temp=0;

    for( x=0;x<20;x++)
    {


        printf("%d\t",var1);
        temp=var1;
        var1=var2;
        var2=var2+temp;
    }
    printf("\n");




    return 0;
}
