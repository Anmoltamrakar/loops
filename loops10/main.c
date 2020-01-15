//10. Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.
//  1
//  22
//  333
//  4444

#include <stdio.h>



int main()
{
    int x,y,r;

    printf("\n\n\t\tno of rows to be inputted:");


    scanf("%d",&r);

    for( x=1;x<=r;x++)
    {
        for( y=1;y<=x;y++){
            printf("%d",x);
        }
        printf("\n");
    }



    return 0;
}
