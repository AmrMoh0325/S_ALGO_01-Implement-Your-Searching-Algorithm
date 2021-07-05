
#ifndef ALGORITHMS_H_
#define ALGORITHMS_H_

#include <stdio.h>
#include <stdlib.h>
#include "Data_Types.h"

//sorts array if not sorted, and performs binary search algorithm(returns index or -1 if number not found)
sint16_t binarySearch(uint32_t *arr,uint8_t size,uint32_t num);

//sorts the provided array incrementally using selection sorting algorithm
void selection_sort(uint32_t *arr,uint8_t size);

//checks if an array is sorted or not
uint8_t array_is_sorted(uint32_t *arr,uint8_t size);

//swaps two numbers
void num_swap(uint32_t *n1, uint32_t *n2);

//prints the provided array
void print_array(uint32_t *arr,int size);


#endif // ALGORITHMS_H_
