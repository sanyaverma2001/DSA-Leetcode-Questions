#include <stdio.h>
#include <string.h>
int wordCount(char *arr, int n)
{
    int w = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ' ')
        {
            w++;
        }
    }
    return w;
}
int main()
{
    char words[5][10];
    printf("Enter a string : ");
    gets(words);
    printf("\n our string is --> %s", words);
    int n = strlen(words);
    int res = wordCount(words, n);
    printf("\n The number of words present in the string is --> %d", res);
    return 0;
}