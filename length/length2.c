#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name: ");
    // dung strlen da dc dinh nghia trong string.h tu dong lay chuoi tinhs chuoi
    int length = strlen(name);
    printf("%i\n", length);
}
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    //strlen (s) la do dai cua string
    for (int i = 0; i < strlen(s); i++)
    {
        //s(i) la ki tu o  vi tri thu i trong mang
        printf("%c", s[i]);
    }
    printf("\n");
}