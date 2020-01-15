//11. Write a program in C to make such a pattern like right angle triangle with number increased by 1.
//  1 <\br>
//  2 3 <\br>
//  4 5 6 <\br>
//  7 8 9 10 <\br>


#include <stdio.h>



int main()


{
    int x,y,n,z=1;
    printf("\n\n\t\tEnter the number of lines\n");
    scanf("%d",&n);

    for(x=1;x<=n;x++)
        {
            for(y=1;y<=x;y++)
            {
                printf(" %d",z);
                z++;
            }

            printf("\n");
        }



return 0;
}
