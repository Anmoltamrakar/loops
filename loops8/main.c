//8. Write a program in C to display the pattern like right angle triangle
//  using an asterisk.
//  *
//  **
//  ***
//  ****


#include <stdio.h>



int main()


{


    int x,y,l;



    printf("\n\n\t\tEnter the number of lines\n");

    scanf("%d",&l);


    for(x=1;x<=l;x++)

    {

        for(y=1; y<=x ;y++)

            printf("*");


        printf("\n");

    }



    return 0;
}
