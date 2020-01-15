//4. Write a program in C to read 10 numbers from keyboard and
//  find their sum and average.


#include <stdio.h>



int main()



{


int x,n,sum=0,avg;


printf("\n\n\t\tEnter term upto which you want to add =");

scanf("%d",&n);

for(x=1;x<=n;x++)
{

    sum+=x;
}
avg=sum/n;

    printf("\n\n\t\tsum upto %d terms is %d and average is %d \n",n,sum,avg);


    return 0;
}
