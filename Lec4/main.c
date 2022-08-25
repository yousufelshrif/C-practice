#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*void revers(int x)
{    int i;
    char arr[x];
scanf("%s",arr);
for(i=x-1;i>=0;i--)
{
    printf("%c",arr[i]);
}
}*/
int main()
{
    int i;
    char*ptr="ahmed";
    char *ch_arr[]={
                        "spike",
                        "tom",
                        "jerry"
                        };
    printf("1st way \n\n");
    for(i=0;i<3;i++)
    {
        printf("string =%s  /t address = %u\n",ch_arr[i],ch_arr[i]);
    }

    ptr[0]='p';
    printf("%s",ptr);
   // int arr[20];
  // char  arrx[7];
  /*  for (int i=0,j;arr[i]!='\0';i++)
    {

    while (!(arr[i]>='a' && arr[i]<='z')&&!(arr[i]>='A' && arr[i]<='Z') && !(arr[i]=='\0'))
    {
        for(j=i;arr[j]!='\0';++j)
        {
            arr[j]=arr[j+1];
        }
            arr[j]='\0';
      }
    }
    puts(arr);
*/

    /*int x;
   // char y='a';
    printf("Enter the size of arr");
    scanf("%d",&x);
    revers(x);
*/

//char arrx[]="yousuf";


//strcat(arrx,arr);
//printf("%s\n",strcpy(arrx,arr));
//printf("%s\n",strcat(arr,arrx));
//printf("%d\n",strcmp(arr,arrx));

/*
printf("Enter 6 letters: ");
scanf("%s",arr);

while(y!='\0')
{
   y=arr[i];
    printf("%c\n",arr[i]);
   i++;
}
printf("%d",i-1);


/*for(i=0;i<7;i++)
{
    printf("%c\n",arr[i]);
}

 printf("the number of letters of arr is: %d\n",i-1);
for(i=0;i<6;i++)
{
    printf("%c\n",arrx[i]);
}
printf("the number of letters of arrx is:%d",i-1);


if (x>y)
{
    printf("arrx is bigger with %d bytes",x);
}
else
{
    printf("arr is bigger with %d bytes",y);
}

for(i=0;i<=5;i++)
{

arr[i]=arrx[i];
}

puts(arr);

*/




    return 0;
}
