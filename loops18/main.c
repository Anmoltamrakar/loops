//18. Write a C program to find all the Armstrong number upto 1000.
//  Armstrong number is a number that is equal to the sum
//  of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.


#include<stdio.h>
#include<conio.h>



int main()


{
int num,t,r,s,c=0;



printf("\n\n\t\tArmstrong numbers between 1 and 1000 are:\n");



for(num=1; num<=1000; num++)
{

t=num;
s=0;

while(t>0)

{
   r=t%10;
   s=s+(r*r*r);
   t=t/10;
}

if(num==s)
{
  printf("\n%d", num);
   c++;
}

}
   printf("%d\n\n",c);

  return 0;
}
