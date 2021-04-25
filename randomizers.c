#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int* random_array(int number_of_elements);

int main()
{
    int * array;

    srand(time(0));
    int number_of_elements = 100;
    array = random_array(number_of_elements);

    for(int index = 0; index < number_of_elements; index++)
    {
        printf("%i, ", array[index]);
    }
    free(array);
    return 0;

}

int* random_array(int number_of_elements)
{
    int * array;
    array = malloc(number_of_elements * sizeof(int));
    if(array == NULL)
    {
        return NULL;
    }

    srand(time(0));
    for(int index = 0; index < number_of_elements; index++)
    {
        array[index] = rand()%100;
    }

    return array;
    free(array);
}



