#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header_fun.h"

void scan(struct school_system student[],int i, int n)
{system("cls");

    for(i=0;i<n;i++)
   {    printf("student number %d\n",i+1);
       printf("Enter the id: ");
       scanf("%d",&student[i].id);
       fflush(stdin);
       printf("Enter the name: ");
       gets(student[i].name);
       printf("Enter the phone: ");
       scanf("%d",&student[i].phone);
       printf("Enter the year: ");
       scanf("%d",&student[i].year);
   }
}

   void display(struct school_system student[],int i, int n)
   {system("cls");
       for(i=0;i<n;i++)
   {
       printf("student number %d\n",i+1);
       printf("student id :%d\n",student[i].id);
       printf("student name:");
       puts(student[i].name);
       printf("student phone:");
       printf("%d\n",student[i].phone);
       printf("student year:");
       printf("%d\n",student[i].year);
   }
   }

   void eidt(struct school_system student[],int student_num,int choice,int i, int n)
{
    //system("cls");
    int new_id,new_phone,new_year;
    char new_name[50];
    switch(choice)
    {

    case 1:
    printf("enter the new id");
    scanf("%d",&new_id);
    student[student_num].id=new_id;
    printf("the new id of student %d is :%d\n",student_num,new_id);
   break;

    case 2:
    printf("enter the new name");
    fflush(stdin);
    //scanf("%s",new_name);
    gets(new_name);
 strcpy(student[student_num].name,new_name);
    printf("the new id of student %d is :\n",student_num);
    puts(new_name);
    break;

    case 3:
    printf("enter the new phone");
    scanf("%d",&new_phone);
    student[student_num].phone=new_phone;
    printf("the new id of student %d is :%d\n",student_num,new_phone);
    break;
    case 4:
    printf("enter the new year");
    scanf("%d",&new_year);
    student[student_num].year=new_year;
    printf("the new id of student %d is :%d\n",student_num,new_year);
    break;
    default:
    printf("wrong input");
    break;
    }

    display(student,i,n);
}

