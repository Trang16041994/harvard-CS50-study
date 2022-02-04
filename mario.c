#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = 0;
    while (number < 1 || number > 8)
    {
        number = get_int("what number do you want? \n");
    }
    int socham = number - 1;
    int sothang = 1;
    // DI THEO CHIEU DOC
    for (int j = 0; j < number; j++)
    {
        //DI THEO CHIEU NGANG
        for (int i = 0; i < socham; i++)
        {
            printf (" ");
        }
        for (int k = 0; k < sothang; k++)
        {
            printf("#");
        }
        printf("  ");

        for (int a = 0; a < sothang; a++)
        {
            printf("#");
        }
        sothang = sothang + 1;
        printf("\n");
        socham = socham - 1;
    }
}