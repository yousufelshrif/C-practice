#include "algorithm.h"

int main()
{
    int x;
    printf("Enter the number of elements\n");
    scanf("%d",&x);

    int arr[x];
    scan(arr,x);
    printf("\n");
    display(arr,x);
    //int y;
   // printf("Enter the number you want to search for\n");
    //scanf("%d",&y);
  // linear_search(arr,x,y);
 //  Binary_searsh(arr,0,x-1,y);
   //swape(&arr[0],&arr[1]);
  // selection_sorting(arr,x);
       //printf("\n");
      // printf("after sorting\n");
   // display(arr,x);
   Bubble_sorting(arr,x);
    printf("\n");
    printf("after sorting\n");
    display(arr,x);
    return 0;
}
