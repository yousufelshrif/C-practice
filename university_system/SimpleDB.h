#ifndef SIMPLEDB_H_INCLUDED
#define SIMPLEDB_H_INCLUDED

#include <stdlib.h>

#define true 1
#define false 0

#define MAX_SIZE 10

typedef unsigned long long int uint8;
typedef int bool;


uint8 currentSize;
uint8 subjects_id[MAX_SIZE][3] ;
uint8 grades_num[MAX_SIZE][3] ;
uint8 student_id;
uint8 student_year;

typedef struct Student
{
    uint8 studentID;
    uint8 studentYear;
    uint8 *courses;
    uint8 *grades;
};

struct Student db[MAX_SIZE];

bool SDB_AddEntry(uint8 id,uint8 year,uint8* subjects,uint8* grades);
uint8 SDB_GetUsedSize(void);
bool SDB_IsFull(void);
void SDB_DeleteEntry(uint8 id);
bool SDB_IsIdExist(uint8 ID);
void SDB_GetIdList(uint8 *count, uint8 *list);
bool SDB_ReadEntry(uint8 id,uint8 *year,uint8* subjects,uint8* grades);


#endif // SIMPLEDB_H_INCLUDED
