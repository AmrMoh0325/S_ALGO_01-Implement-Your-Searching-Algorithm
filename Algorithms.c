#include "Algorithms.h"

/*====================== TASK ===================================*/

sint16_t binarySearch(uint32_t *arr,uint8_t size,uint32_t num)
{
    if (size==0)        return -1;
    uint8_t sort_check= array_is_sorted(arr,size);
    if (!sort_check)
    {
        selection_sort(arr,size);
    }

    uint8_t start,end,mid;

    start=0;
    end=size-1;
    if (num<arr[start] || num>arr[end])     return -1;
    else if (num==arr[start])               return start;
    else if (num==arr[end])                 return end;
    while (start<=end)
    {
       mid=(start+end)/2;

       if (num==arr[mid])          return mid;
       else if (arr[mid]>num)      end = mid-1;
       else if (arr[mid]<num)      start = mid+1;
    }
    return -1;
}

/*==========================================================================*/

void selection_sort(uint32_t *arr,uint8_t size)
{
    uint32_t i,j,min_index=0;

    for (i=0;i<size-1;i++)
    {
        min_index=i;
        for (j=i+1;j<size;j++)
        {
            if (arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        if (min_index>i)    num_swap(arr+i,arr+min_index);
    }
}

uint8_t array_is_sorted(uint32_t *arr,uint8_t size)
{
    for (uint32_t i=0;i<size-1;i++)
    {
        if (arr[i]>arr[i+1])    return 0;
    }
    return 1;
}

void num_swap(uint32_t *n1, uint32_t *n2)
{
    *n1 ^= *n2;
    *n2 = *n1 ^ *n2;
    *n1 ^= *n2;
}


void print_array(uint32_t *arr,uint32_t size)
{
    uint32_t i;
    for (i=0;i<size-1;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("%d",arr[i]);
}
