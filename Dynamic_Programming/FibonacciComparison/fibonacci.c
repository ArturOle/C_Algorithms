

unsigned __int64 fib_r(int n)
{
    /*
    Main recursive implementation of fibonacci sequence
    */
    if(n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return fib_r(n-1) + fib_r(n-2);
    }
}


unsigned __int64 fib(int n)
{
    /*
    The classical implementation of fibonacci sequence with O(2^n) time complexity
    This function is wrapper around main implementation created to minimize 
    numer of if statements. 
    */
    if (n < 0)
    {
        assert("Error: N needs to  be graater or equal to 0");
        return 0;
    }
    else
        return fib_r(n);
}

