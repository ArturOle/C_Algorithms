#include "dynamic_fibonacci.h"


unsigned __int64 dynamic_fib(int n)
{
    /* Initialization */
    int i;
    unsigned __int64* memo;
    long size_of_memo = n*sizeof(unsigned __int64);  // n x 8 bajts -- pait is 2xINT

    memo = (unsigned __int64*)malloc(size_of_memo);
    memo[0] = 1;
    memo[1] = 1;

    /* Calculations */
    for (i=2; i < n; i++)
    {
        memo[i] = memo[i-1] + memo[i-2];
    }

    printf("%llu\n", memo[n-1]);
    return memo[n-1];
    free(memo);
}