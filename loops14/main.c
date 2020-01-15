//14. Write a program in C to find the sum of the series upto 10 terms:
// 1-x^2/2!+x^4/4!........

#include <stdio.h>

int main()

{
    float x,sum,y,z;

    int i,n;

    printf("\n\n\t\tInput the Value of x :\t");

    scanf("%f",&x);

    printf("\n\n\t\tInput the number of terms :\t ");

    scanf("%d",&n);

    sum =1; y = 1;

    for (i=1;i<n;i++)
    {

      z = (2*i)*(2*i-1);
      y = -y*x*x/z;
      sum =sum+ y;

    }

    printf("\n\n\t\tthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum,n,x);



    return 0;

}

