

int num_in_array(int num, int memo[], int memo_size)
{
    int i;
    int length = memo_size;

    for(i=0; i < length; i++)
    {
        if(memo[i] == num)
        {
            return 1;
            break;
        }    
    }
    return 0;
}


