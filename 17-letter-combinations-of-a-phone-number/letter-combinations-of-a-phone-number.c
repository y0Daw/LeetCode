/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
  char *map[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void solve(char *digits,int index,char *current,char **result,int* count)
{
    if(digits[index] == '\0')
    {
        current[index] = '\0';
        result[*count] = malloc(index + 1);
        strcpy(result[*count],current);
        (*count)++;
        return;
    }

    char *letters = map[digits[index] - '0'];
    for(int i = 0; letters[i] != '\0'; i++)
    {
        current[index] = letters[i];
        solve(digits, index + 1, current, result, count);
    }
}


char** letterCombinations(char* digits, int* returnSize) {
    *returnSize = 0;
    if(digits[0] == '\0')
        return NULL;

    int len = strlen(digits);
    int capacity = 1;

    for(int i = 0; i < len ; i++)
        capacity *= strlen(map[digits[i] - '0']);

    char **result = malloc(capacity *sizeof(char *));
    char *current = malloc((len + 1) * sizeof(char));

    int count = 0;

    solve(digits, 0, current, result, &count);
    free(current);

    *returnSize = count;
    return result;
}