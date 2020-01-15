//12. Write a program in C to make such a pattern like a pyramid with an asterisk.
//     *
//    * *
//   * * *
//  * * * *


#include<stdio.h>


int main()


{

    int  n,x,r;
    printf("\n\n\t\tEnter number of rows: ");
    scanf("%d",&n);


    for (r=1; r<=n; r++)
    {


        for (x=1; x<=n-r; ++x)
            printf(" ");
        {

        for(x=1;x<=r;x++)
         printf("* ");
        }
        printf("\n");
    }


    return 0;
}
