//20. Write a program in C to find all the prime numbers less than 1000.

#include <stdio.h>

int main()

{

    int x,y,z;

    printf("\n\n\t\tEnter the num upto which you want to print prime num \n");
    scanf("%d",&z);
    for(x=2;x<=z;x++)
    {

     y=2;
    while(x%y!=0)
    {
        y++;
    }

    if(y==x)
    {
        printf("%d\t",x) ;
        }

  }
    return 0;
}
