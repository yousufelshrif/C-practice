#include <stdio.h>
#include <stdlib.h>

/*void odd_even(void)
{
    int x;
    printf("enter your number");
    scanf("%d",&x);
    if (x%2==1)
    {
        printf("the number is odd");
    }
    else if (x%2==0)
    {
        printf("the number is even");
}
    }*/
/*int inc (int A)
{
    A+=1;
    return A;
}*/

/*void inc ()
{
    int x;
     printf("Enter a number ");
    scanf("%d",&x);
    x+=1;
    printf("inc= %d",x);*/


    /*int inc ()
    {
        int x;
     printf("Enter a number ");
    scanf("%d",&x);
    x+=1;
    return x;
    }*/
    /*void inc (int x)
    {


    x+=1;
    printf("inc= %d",x);
    }*/

    int sum(int *sub1,int *sub2,int *sub3,int *sub4,int *sub5)
    {
          int total;


    total = (*sub1)+(*sub2)+(*sub3)+(*sub4)+(*sub5);


    return total;


    }





    int avarage1(int sum)
    {
       int avarege = sum/5;
    if(avarege>=90&&avarege<=100)
    {
        printf("your grade is A");
    }

    else if(avarege>=70&&avarege<=89)
    {
        printf("your grade is B");
    }

    else if(avarege>=50&&avarege<=69)
    {
        printf("your grade is C");
    }

    else if(avarege>=20&&avarege<=49)
    {
        printf("your grade is D");
    }
    else
    {
        printf("your grade is F");
    }
    }

int main()
{
    int sub1,sub2,sub3,sub4,sub5;

    int x;
    do
    {
        x=0;
        printf("Enter the score of the first sub1: ");
    scanf("%d",&sub1);


    if (sub1>100||sub1<0)
    {
        printf("wrong input\n");
        x=1;
        }
    }while(x==1);


do
    {
        x=0;
         printf("Enter the score of the second sub2: ");
    scanf("%d",&sub2);
    if (sub2>100||sub2<0)
    {
        printf("wrong input\n");
        x=1;
        }
    }while(x==1);

    do
    {
        x=0;
         printf("Enter the score of the second sub3: ");
    scanf("%d",&sub3);
    if (sub3>100||sub3<0)
    {
        printf("wrong input\n");
        x=1;
        }
    }while(x==1);
do
    {
        x=0;
         printf("Enter the score of the second sub4: ");
    scanf("%d",&sub4);
    if (sub4>100||sub4<0)
    {
        printf("wrong input\n");
        x=1;
        }
    }while(x==1);

    do
    {
        x=0;
         printf("Enter the score of the second sub5: ");
    scanf("%d",&sub5);
    if (sub5>100||sub5<0)
    {
        printf("wrong input\n");
        x=1;
        }
    }while(x==1);
    int z= sum(&sub1,&sub2,&sub3,&sub4,&sub5);
    printf("the sum = %d\n",z);

    avarage1(sum(&sub1,&sub2,&sub3,&sub4,&sub5));





    //odd_even();
  /* int x,B;
    printf("Enter a number");
    scanf("%d",&x);
    B =inc(x);
    printf("x=%d\nB=%d",x,B);
*/
   //inc();

    //printf("inc num= %d",inc());

 /*   int y;
 printf("Enter a number ");
    scanf("%d",&y);
    inc(y);*/




    /*
    int x,y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);

    switch(x>y)
    {

case 1:
    printf("the first number is greater");
    break;
case 0:
    printf("the second number is greater");
    break;
    }

*/


/*
    int x,y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    if(x>y)
    {
        printf("the first number is greater");
    }
    else
    {

         printf("the second number is greater");
    }

    */

    /*
    int x,i;
    printf("Enter your number: ");
    scanf("%d",&x);
   for(i=0;i<=12;i++)
   {
       printf("%d * %d = %d\n",x,i,x*i);
   }

    */

   /* char x;
    while(1)
    {

    printf("Enter your input\n");
    fflush(stdin);
    scanf("%c",&x);
    if(x>=65&&x<=90)
    {
        printf("This is an alphabetic uppercase char\n");
    }
    else if (x>=97&&x<=122)
    {
        printf("This is an alphabetic lowercase char\n");
    }
    else
    {
       printf("This is not an alphabetic char\n");
    }
    }*/

    return 0;
}
