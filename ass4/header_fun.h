#ifndef HEADER_FUN_H_INCLUDED
#define HEADER_FUN_H_INCLUDED
struct school_system
{
    int id;
    char name[50];
    int phone;
    int year;
};


void scan(struct school_system student[],int i, int n);
   void display(struct school_system student[],int i, int n);
   void eidt(struct school_system student[],int student_num,int choice,int i, int n);
#endif // HEADER_FUN_H_INCLUDED
