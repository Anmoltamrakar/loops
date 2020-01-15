//9. Write a program in C to display the pattern like right angle triangle with
//  a number like below.
//  1
//  12
//  123
//  1234


#include <stdio.h>

int main()

{


    for(int x=1;x<=4;x++)

    {

        for(int y=1;y<=x;y++){
            printf("%d",y);
        }
        printf("\n");
    }


    return 0;
}
