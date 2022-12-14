#include <stdio.h>
#include <string.h>
void displayVowels(char *str, int n)
{
    printf("\n Vowels present in the string are as follows: \n");
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='a' || str[i]=='A'){
            printf("\n %c",str[i]);
        }
        else  if(str[i]=='e' || str[i]=='E'){
            printf("\n %c",str[i]);
        }
        else  if(str[i]=='i' || str[i]=='I'){
            printf("\n %c",str[i]);
        }
        else  if(str[i]=='o' || str[i]=='O'){
            printf("\n %c",str[i]);
        }
        else  if(str[i]=='u' || str[i]=='U'){
            printf("\n %c",str[i]);
        }
    }
}
int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    int n= strlen(str);
    printf("\n our string is --> %s", str);
    displayVowels(str, n);
    return 0;
}