#include "randomizers.h"

unsigned __int64* Horner(int polynominal[], int * nuber_of_elements, int x_value);


int main()
{
    //int *array_of_mulyipliers;
    int number_of_elements = 4;
    int* p_to_length = &number_of_elements;
    int x_val = 2;  // As an example

    int array_of_mulyipliers[] =  { 2,2,2,2 }; //random_array(number_of_elements);
    
    unsigned __int64* result = Horner(array_of_mulyipliers, &number_of_elements, x_val);

    printf("%llu", *result);
    return 0;
}


unsigned __int64* Horner(int polynominal[], int * nuber_of_elements, int x_value)
{
    /// <summary>
    ///     The implementation of Horner method of calculating value of the polynominal.
    ///     Horner approach reduces complexity of calculating polunominals from O(n^2) to just O(n).
    /// </summary>
    /// 
    /// <param name="polynominal"> 
    /// Array of scalars of the polynominal. 
    /// Polynominal array should be simplifide, example: "2x2 + 1x + 6" correct, "1x2 + 1x2 + 1x + 5" not correct
    /// </param>
    /// <param name="n"> The degree of the polynominal</param>
    /// <param name="x"> The value of x for polynominal</param>
    /// 
    /// <returns>double</returns>
    unsigned __int64 value = polynominal[0];
    unsigned __int64* p_value = &value;

    // Iterating over polynominal with constant iterator because it's read only
    for (int it = 1; it < *nuber_of_elements; ++it)
    {
        // New value is value times x plus value at it
        value = value * x_value + polynominal[it];
    }

    return p_value;

}