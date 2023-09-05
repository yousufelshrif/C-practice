#include "SimpleDB.h"

bool SDB_AddEntry(uint8 id,uint8 year,uint8* subjects,uint8* grades)
{
    // If there is space in database for a new student
    if (currentSize < MAX_SIZE)
    {
        // Add the new student using the provided student data
        db[currentSize].studentID = id;
        db[currentSize].studentYear = year;
        db[currentSize].courses = subjects;
        db[currentSize].grades = grades;

        // Increment the database current size
        currentSize++;

        // Student added successfully
        return true;
    }

    // Student not added, because the database is full
    return false;
}


uint8 SDB_GetUsedSize(void)
{

    return currentSize;
}

bool SDB_IsFull(void)
{
    return (currentSize == MAX_SIZE);
}

void SDB_DeleteEntry(uint8 id)
{
    int i=0;
    int j=0;
    for (i=0; i<SDB_GetUsedSize(); i++)
    {
        if (db[i].studentID == id)
        {
            // Shifting student elements after the deleted one
            for (j=i; j<SDB_GetUsedSize()-1; j++)
            {
                db[j] =db[j+1];
            }
            // Decrement the size of the database
            currentSize--;

            return;
        }
    }
    printf("This id does not exist\n");
    return;
}


bool SDB_IsIdExist(uint8 ID)
{
    int i=0;
    // Linear search for student with provided ID
    for (i=0; i<SDB_GetUsedSize(); i++)
    {
        if (db[i].studentID == ID)
        {

            return true;
        }
    }

    return false;
}

void SDB_GetIdList(uint8 *count, uint8 *l)
{
    int i=0;
    *count = currentSize;

    // Fill ID list with student IDs from database
    for (i=0; i<SDB_GetUsedSize(); i++)
    {
        l[i] = db[i].studentID;
    }
}

bool SDB_ReadEntry(uint8 id,uint8 *year,uint8* subjects,uint8* grades)
{
    int i=0;
    int j=0;
    uint8 *l = malloc(currentSize * sizeof(uint8));
    for (i=0; i<SDB_GetUsedSize(); i++)
    {

        if (id == db[i].studentID)
        {
            *year = db[i].studentYear;
            subjects=db[i].courses;
            grades= db[i].grades;
            printf("student id: %lu - student year: %lu\n", id, db[i].studentYear);
            for (j=0; j<3; j++)
            {
                // print the array of subject ids and grads one by one
                printf("course id: %lu - course grade: %lu\n", db[i].courses[j], db[i].grades[j]);
            }

            return true;
        }
    }
    printf("id dose not exist in the data base");
    return false;
}


void menu(void)
{

    bool first_time=true;
    int choice;
    int i=0;
    int j=0;
    int tomenu;

    do
    {
        if (first_time==false)
        {
            system("cls");
            printf("choose between 1 and 7 only \n\n");

        }

        // the menu display
        printf("Enter your choice: \n\n");
        printf("1-Add a new student\n");
        printf("2-check if it is full\n");
        printf("3-number of entries\n");
        printf("4-Delete entries by ID\n");
        printf("5-Get the list of IDs of students\n");
        printf("6-display the data of a given ID\n");
        printf("7-Check if the ID exist\n\n");

        printf("press any letter to quit\n");





        scanf("%d",&choice);
        first_time =false;
    }
    while(choice <0 || choice >7);

    first_time=true;
    //decide the command with the choice variable
    switch(choice)
    {

    case 1:
        // to clear the screen
        system("cls");
//      count to the 2nd Dymntion array (subject and grads)
        int arr_count=0;


        printf("Enter student id\n");
        scanf("%lu",&student_id);

        if (SDB_IsIdExist(student_id)==1)
        {
            printf("That id is taken\n");

             printf("\npress (1) to return to the main menu\n");
        scanf("%d",&tomenu);
        if (tomenu==1)
        {
            system("cls");
            menu();
        }
        }

        printf("Enter student year\n");
        scanf("%lu",&student_year);

        for (i=0; i<1; i++)
        {

            for(j=0; j<3; j++)
            {
                printf("Enter subject id of the %d subject\n",j+1);
                //currentSize is the current object to be entered
                scanf("%lu",&subjects_id[currentSize][j]);
                do
                {
                    if (first_time ==false)
                    {
                        printf("Grades between 0 and 100 only, Try again\n");
                    }

                    printf("Enter grades of the %d subject\n",j+1);
                    scanf("%lu",&grades_num[currentSize][j]);

                    first_time=false;
                }
                while(grades_num[currentSize][j]<0||grades_num[currentSize][j]>100);

                first_time=true;
            }

            // Add the student
            SDB_AddEntry(student_id, student_year, &subjects_id[currentSize][arr_count], &grades_num[currentSize][arr_count]);

            // increment the counter
            arr_count++;
        }

        // print the data base
        for (i=0; i<currentSize; i++)
        {
            printf("student id: %lu - student year: %lu\n", db[i].studentID, db[i].studentYear);
            for (j=0; j<3; j++)
            {
                // print the array of subject ids and grads one by one
                printf("course id: %lu - course grade: %lu\n", db[i].courses[j], db[i].grades[j]);
            }
            printf("\n\n");
        }

        printf("\npress (1) to return to the main menu\n");
        scanf("%d",&tomenu);
        if (tomenu==1)
        {
            system("cls");
            menu();
        }

        break;
//-----------------------------------------------------------------------------
    case 2:
        system("cls");
        if (SDB_IsFull()==1)
        {
            printf("Data base is full\n\n");
        }

        else
        {
            printf("Data base is not full\n\n");
        }
        printf("press (1) to return to the main menu\n");
        scanf("%d",&tomenu);
        if (tomenu==1)
        {
            system("cls");
            menu();
        }
        break;
//-----------------------------------------------------------------------------
    case 3:
        system("cls");

        printf("Number of entries is: %d\n\n",currentSize) ;
        printf("press (1) to return to the main menu\n");

        scanf("%d",&tomenu);
        if (tomenu==1)
        {
            system("cls");
            menu();
        }
        break;
//-----------------------------------------------------------------------------
    case 4:
        system("cls");

        int delete_id;

        printf("Enter the id that you want to delete\n");
        scanf("%d",&delete_id);

        SDB_DeleteEntry(delete_id);

        printf("\n");
        printf("press (1) to return to the main menu\n");
        scanf("%d",&tomenu);
        if (tomenu==1)
        {
            system("cls");
            menu();
        }
        break;
//-----------------------------------------------------------------------------
    case 5:
        system("cls");
        uint8 c;
        uint8 *l = malloc(currentSize * sizeof(uint8));

        SDB_GetIdList(&c, l);

        printf("count: %lu\nlist of ids: ", c);
        for (int i=0; i<currentSize; i++)
        {
            printf(" %lu ", l[i]);
        }
        printf("\n\n");
        free(l);
        printf("press (1) to return to the main menu\n");
        scanf("%d",&tomenu);
        if (tomenu==1)
        {
            system("cls");
            menu();
        }
        break;
//-----------------------------------------------------------------------------
    case 6:
        system("cls");
        uint8 search_id;

        printf("Enter the id you want to search for it's data:  ");
        scanf("%lu",&search_id);
        printf("\n");

        SDB_ReadEntry(search_id, &student_year, &subjects_id[currentSize][arr_count], &grades_num[currentSize][arr_count]);

        printf("\n\npress (1) to return to the main menu\n");
        scanf("%d",&tomenu);
        if (tomenu==1)
        {
            system("cls");
            menu();
        }
        break;
//-----------------------------------------------------------------------------
    case 7:
        system("cls");

        printf("Enter the id you want to check:  ");
        scanf("%lu",&search_id);

        if (SDB_IsIdExist(search_id)== true)
        {
            printf("id does exist\n");
        }

        else
        {
            printf("id does not exist\n");
        }

        printf("\npress (1) to return to the main menu\n");
        scanf("%d",&tomenu);
        if (tomenu==1)
        {
            system("cls");
            menu();
        }
        break;

    }
}
