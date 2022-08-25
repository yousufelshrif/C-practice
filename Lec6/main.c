#include <stdio.h>
#include <stdlib.h>

struct node
{
     int x:5;
     int y:4;
     int z;
}ob1;



int main()
{

printf("%d\n",sizeof(ob1));
 struct node ob1 ={31,12,2014};
 printf("data is %d/%d/%d",ob1.x,ob1.y,ob1.z);

    return 0;
}
