//17. Write a C program to find the sum of the digits of a number.
//  For example if the user inputs 156, the output should be 12
//  because 1 + 5 + 6 = 12.

# include<stdio.h>




int gsum(int n)
{
   int sum = 0;


   while (n != 0)
   {
       sum = sum + n % 10;
       n = n/10;
   }
   return sum;
}

int main()
{
  int n;
  printf("\n\n\t\tEnter a  number ");
  scanf("%d",&n);
  printf("\n\n\t\taddding individual digit we get %d \n", gsum(n));
  return 0;
}
