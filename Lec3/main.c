#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *p;

   int (*ptr)[5];
   int arr[5];
   p=arr;
    ptr =&arr;
    printf("p= %p, ptr = %p\n",p,ptr);
    p++;
    ptr++;
     printf("p= %p, ptr = %p\n %p\n",p,ptr,  (ptr+4*sizeof(int)));
    return 0;
}
