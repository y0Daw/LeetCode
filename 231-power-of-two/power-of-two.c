//Bharat
bool isPowerOfTwo(int n) {
    int count = 0;
    for(int i = 0; i < 31; i++)
    {
        if(n & (1<<i))
            count++;
    }
    if(count == 1 && n >= 0)
        return true;
    return false;
}