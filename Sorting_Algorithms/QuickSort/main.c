#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "randomizers.h"
#include <crtdbg.h>


int* quick_sort(int unsorted[], int lower, int higher);
int __partition(int unsorted[], int lower, int higher);


int main()
{
    int *unsorted_array;
    int number_of_elements = 100;
    int* p_to_length = &number_of_elements;

    unsorted_array = random_array(number_of_elements);

    for(int i = 0; i < number_of_elements; i++)
    {
        printf("%i, ", unsorted_array[i]);
    }

    int lower = 0;
    int higher = number_of_elements-1;

    unsorted_array = quick_sort(unsorted_array, lower, higher);

    printf("\n");
    for(int i = 0; i < number_of_elements; i++)
    {
        printf("%i, ", unsorted_array[i]);
    }

    free(p_to_length);
    free(unsorted_array);
    //free(sorted);
    _CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
    return 0;
}


int* quick_sort(int unsorted[], int lower, int higher)
{
    /* 
    unsorted - array reference
    lower - lower index
    higher - higher index
    */
    if(lower < higher)
    {
        int p = __partition(unsorted, lower, higher);
        quick_sort(unsorted, lower, p-1);
        quick_sort(unsorted, p+1, higher);
    }
    return unsorted;
}


int __partition(int unsorted[], int lower, int higher)
{
    int pivot = unsorted[higher];  // Using less optimal pivot, from original version of quick sort

    int i = (lower-1);
    int j = lower;
    int temp;
    for(j; j <= higher-1; j++)
    {
        if(unsorted[j] < pivot)
        {
            i++;
            temp = unsorted[i];
            unsorted[i] = unsorted[j];
            unsorted[j] = temp;
        }
    }
    temp = unsorted[i+1];
    unsorted[i+1] = unsorted[higher];
    unsorted[higher] = temp;
    return i+1;
}
