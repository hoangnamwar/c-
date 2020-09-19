bool snt(uint64_t x)
{
    if (x < 2)    
        return false;
    for (uint64_t i = 2; i <= sqrt((float)x); i ++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}