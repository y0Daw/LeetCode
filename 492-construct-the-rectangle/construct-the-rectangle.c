/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
   int *arr = malloc(2 * sizeof(int));
   int w = (int)sqrt(area);

   while( area % w != 0)
    w--;

     arr[0] = area / w;
     arr[1] = w;

    *returnSize = 2;
    return arr;
}