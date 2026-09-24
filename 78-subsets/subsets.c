/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int total = 1 << numsSize;
    int **result = malloc(total * sizeof(int *));
    *returnColumnSizes = malloc(total * sizeof(int));

    *returnSize = total;

    for(int mask = 0; mask < total; mask++)
    {
        int count = 0;
        for(int j = 0; j < numsSize; j++)
        {
            if(mask & (1 << j))
                count++;
        }

        result[mask] = malloc(count * sizeof(int));
        (*returnColumnSizes)[mask] = count;

        int i = 0;
        for(int j = 0; j < numsSize; j++)
        {
            if(mask & (1<<j))
            {
                result[mask][i] = nums[j];
                i++;
            }
        }
    }
    return result;
}