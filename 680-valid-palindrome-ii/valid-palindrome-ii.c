int ispalindrome(char *s,int l,int r)
{
    while(l < r)
    {
        if(s[l] != s[r])
           return 0;
        l++;
        r--; 
    }
    return 1;
}

bool validPalindrome(char* s) {
    int l = 0, r = strlen(s) - 1;
    while(l < r)
    {
        if(s[l] == s[r]){
            l++;
            r--;
         }
         else
            return ispalindrome(s,l+1,r) || ispalindrome(s,l,r-1);

    }
    return 1;
}

