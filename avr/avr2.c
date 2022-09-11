#include<cs50.h>
#include<stdio.h>

int main (void)
{
    int n = get_int("sonhap");
    for(int i = 1; i <= n*2; i++)
    {
        printf("%i\n", i);
    }
}