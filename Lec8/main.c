#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *current;
struct node *one =NULL;
struct node *two =NULL;
struct node *three =NULL;
struct node *four =NULL;
struct node *five =NULL;
struct node *six =NULL;
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));


one->data=1;
two->data =2;
three->data=3;



one->next=two;
two->next=three;
three->next=NULL;

head =one;
current = head;

while(current!=NULL)
{
    printf("current->data: %d\n",current->data);
    current=current->next;
}

printf("\n");

four = malloc(sizeof(struct node));
four->data=4;
four->next=one;


head =four;
current = head;

while(current!=NULL)
{
    printf("current->data: %d\n",current->data);
    current=current->next;
}
printf("\n");
five = malloc(sizeof(struct node));
five->data=5;
five->next=two;
one->next=five;

head =four;
current = head;

while(current!=NULL)
{
    printf("current->data: %d\n",current->data);
    current=current->next;
}
printf("\n");

six = malloc(sizeof(struct node));
six->data=6;
three->next=six;
six->next=NULL;

head =four;
current = head;
while(current!=NULL)
{
    printf("eeecurrent->data: %d\n",current->data);
    current=current->next;
}

printf("\n");

head =four;

/////////////////////////////////////////////////
struct node *end= head;
struct node *prev=NULL;

while(end->next!=NULL)
{
    prev=end;//////end-1
    end=end->next;
}

prev->next=NULL;  //object 3.next = null

free(end);
////////////////////////////////////////////////
current=head;
while(current!=NULL)
{
    printf("sscurrent->data: %d\n",current->data);
    current=current->next;
}
printf("\n");
/////////////////////////////////////////
struct node *temp;

temp=head;
current=head;
head=head->next;
free(temp);
////////////////////////////////////////
current=head;
while(current!=NULL)
{
    printf("sscurrent->data: %d\n",current->data);
    current=current->next;
}
printf("\n");
////////////////////////////////////////
temp=head;
prev=head;
int i=0;
int position =3;
for(i=0;i<position;i++){

    if(i==0 && position==1){
        head=head->next;
        free(temp);
    }
    else{

        if(i== position-1 && temp){

            prev->next= temp->next;
            free(temp);
        }
        else {
            prev=temp;
            if(prev==NULL)
                break;
            temp=temp->next;
        }

    }

}

///////////////////////////////////////
current=head;
while(current!=NULL)
{
    printf("current->data: %d\n",current->data);
    current=current->next;
}
    return 0;


}
