int comparator(const void *a,const void *b)
{
    int x = *(const int *)a, y = *(const int *)b;
    return (x > y) - (x < y);
}

int thirdMax(int* nums, int numsSize) {
    int count = 1;
     qsort(nums,numsSize,sizeof(int),comparator);
    for(int i = numsSize-2; i >= 0; i--)
    {
        if(nums[i] != nums[i + 1])
            count++;
        if(count == 3)
            return nums[i];
    }
    return nums[numsSize - 1];
}

