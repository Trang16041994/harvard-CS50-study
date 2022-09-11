#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    //i la ki tu thu i bat dau gt bang 0
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            // in ki tu khac do
            printf("%c", s[i]);
        }
    }
    printf("\n");
}