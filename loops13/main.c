//13. Write a C program to calculate the factorial of a given number.


#include<stdio.h>


int main()

{

  int x,y=1,num;

  printf("\n\n\t\tEnter a number: ");
  scanf("%d",&num);



  for(x=1;x<=num;x++)
      y=y*x;

  printf("\n\n\t\tFactorial of %d is: %d\n",num,y);


  return 0;
}
