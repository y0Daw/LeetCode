/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int comparator(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *arr = malloc(numsSize * sizeof(int));

    qsort(nums,numsSize,sizeof(int),comparator);
    int j = 1, count = 0;

    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] < j)
            continue;
        
        while(j < nums[i])
            arr[count++] = j++;

        j = nums[i] + 1;     
    }
    while(j <= numsSize)
        arr[count++] = j++;

    *returnSize = count;
    return arr;
}