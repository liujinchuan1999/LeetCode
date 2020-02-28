
ol isValid(char * s){
    if (s == NULL || s[0] == '\0') return true;
    char *arr = (char *)malloc(strlen(s) + 1);
    int top = 0;
    for(int i = 0; s[i]; i++) {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') arr[++top] = s[i];
        else if ((s[i] == (arr[top] + 1)) || (s[i] == (arr[top] + 2))) top--;
        else return false;
    }
    free(arr);
    return (!top);
}
