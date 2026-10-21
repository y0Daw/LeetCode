/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **str = malloc(n * sizeof(char*));
    *returnSize = n;
    for(int i = 1; i <= n; i++)
    {
        str[i - 1] = malloc(9 * sizeof(char));
        if(i % 3 == 0 && i % 5 == 0)
            sprintf(str[i - 1],"FizzBuzz");
        else if(i % 3 == 0)
            sprintf(str[i - 1],"Fizz");
        else if(i % 5 == 0)
            sprintf(str[i - 1],"Buzz");
        else
            sprintf(str[i - 1],"%d",i);
    }
    return str;
}