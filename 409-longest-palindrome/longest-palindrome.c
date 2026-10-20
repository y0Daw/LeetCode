int longestPalindrome(char* s) {
    int arr[128] = {0};
    int count = 0, flag = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        arr[s[i]]++;
    }

    for(int i = 0; i < 128; i++) 
    {
        count += (arr[i] / 2) * 2;

        if(arr[i] % 2 == 1)
            flag = 1;
    }

    if(flag)
        count++;
        
    return count;
}

