
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <crtdbg.h>

#include "fibonacci.h"
#include "dynamic_fibonacci.h"


int main()
{
    _CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    dynamic_fib(94); // MAX 92 for signed int
    end = clock();
    cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("%f\n", cpu_time_used);

    start = clock();
    printf("%llu\n", fib(14));
    end = clock();
    cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("%f\n", cpu_time_used);

    start = 0;
    end = 0;
    
    return 0;
}

