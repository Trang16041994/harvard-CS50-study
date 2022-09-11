#include <cs50.h>
#include <stdio.h>
//khai bao ham int string_length la sring s
int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    //khai bao va khoi tao ham
    int length = string_length(name);
    printf("%i\n", length);
}
// dinh nghia ham
int string_length(string s)
{
    int i = 0;
    // xet ki tu thu i khac voi ket thuc cua string
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}