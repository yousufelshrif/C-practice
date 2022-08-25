#include <stdio.h>
#include <stdlib.h>
#define max(x,y) ((x>y)?printf("max is %d\n",x):printf("max is%d\n",y))
#define min(x,y) ((x<y)?printf("min is %d\n",x):printf("min is %d\n",y))
int main()
{
    int a,b;
    printf("enter the first number: ");
    scanf("%d",&a);

    printf("enter the second number: ");
    scanf("%d",&b);
    max(a,b);
    min(a,b);
    return 0;
}
