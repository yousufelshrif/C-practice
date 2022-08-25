#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*int factorial(int x)
{
while(x!=1)
{
    return x*factorial(x-1);
}
}*/

int main()
{
  /* -----p3-----
  int x,z=0,t1=0,t2=1;
printf("Fibonacci sequence:\n");
printf("%d\n",t1);
printf("%d\n",t2);
    while(z<20)
    {

        if (z%2==0)
        {

       t1=t1+t2;
       printf("%d\n",t1);

        }
       else
       {
       t2=t1+t2;
        printf("%d\n",t2);
       }

        z++;

    }
*/


/* -----p1----
int y;
printf("enter a number");
scanf("%d",&y);
printf("%d",factorial(y));*/

//--------p2-------

int a,z,r,y,x;
printf("enter your number:");
scanf("%d",&x);
z=x;
printf("z1=%d\n",z);
    while(z!=0)
{
    a++;
    z=z/10;

}
z=x;
while(x!=0)
{
    r=x%10;
    y=y+(pow(r,a));
    x=x/10;
}

if (y==z)
{
    printf("it is an armstrong number\n");
}
else
{
    printf("it is not an armstrong number\n");
}
//*/

    return 0;

}


