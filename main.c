#include <stdio.h>
#include <stdlib.h>
#include "Algorithms.h"
#include "TestCases.h"



//IMPORTANT NOTE
// Please note that the requested task function is located in the
// beginning of the "Algorithms.c" file


int main()
{
     uint32_t input;
    sint32_t num;
    printf("Enter number of array members: ");
    scanf("%d", &input);
    uint8_t arr_size=(uint8_t)input;
    uint32_t arr[arr_size];
    printf("\nEnter array members in any order: ");
    for (uint32_t i=0;i<arr_size;i++)
    {
       scanf("%d", arr+i);
    }

    printf("Enter number you want to find: ");
    scanf("%d", &num);

    system("cls");
    printf("Your array:\t");
    print_array(arr,arr_size);
    sint16_t index=binarySearch(arr,arr_size,num);
    printf("\n\nSorted array:\t");
    print_array(arr,arr_size);
    if (index>=0)
    {
        printf("\n\nindex of %d is: %d\n\n",num,index);
    }
    else
    {
        printf("\n\nNumber not found\nSearch result = %i\n\n",index);
    }

    return 0;
}



