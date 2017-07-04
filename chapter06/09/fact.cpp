int fact(int val)
{
    int result = 1;
    while(val)
        result *= val--;
    return result;
}