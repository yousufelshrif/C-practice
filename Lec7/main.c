
#include "header_fun.h"



int main(){

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
