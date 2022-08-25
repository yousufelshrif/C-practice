#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#pragma pack(push,2)
struct student
{
    double grade;
    char id;
    char name;



};


int main()
{
   struct student student1 ;


    printf("size is  =%d\n",sizeof(student1));

    return 0;
}
