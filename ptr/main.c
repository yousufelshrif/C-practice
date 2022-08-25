#include <stdio.h>




int main()
{
    int x,y,j=2;
    printf("enter your number");
    scanf("%d",&x);
    for(int i=2;i<12;i++)
    {

        while(j<12)
        {
            y=i*j;
            j+=1;
            printf("%d\n",y);
            if (x==y)
            {
               // break;
            }

        }
    }

    if (x!=y)
            {
                printf("it is a prime number");
            }
       else if (x==y)
        {
            printf("it is not a prime number");
        }
return 0;

}

