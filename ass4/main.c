#include <stdio.h>
#include "header_fun.h"
/*#define n integers[1]
#define i integers[0]
#define student_num integers[2]
#define choice integers[3]
#define id integers[4]
#define phone integers[5]
#define year integers[6]
#define new_id integers[7]
#define new_phone integers[8]
#define new_year integers[9]

*/
int main(){
  /*  int *integers;
   integers = (int*) calloc(0,sizeof(int));
    if (integers ==NULL)
    {
        printf("Error in pinter");
    }*/
     int i;
    int n;
   int student_num=0,choice=0;
    printf("enter number of students");
    scanf("%d",&n);
   struct school_system student[n];
    scan(student,i,n);

   display(student,i,n);
   printf("enter the number of student you want to edit");
   scanf("%d",&student_num);
   printf("please enter 1-to edit id\n2-to edit name\n3-to edit phone number\n4-to edit year\n");
   scanf("%d",&choice);
    eidt(student,student_num-1,choice,i,n);

    return 0;
}
