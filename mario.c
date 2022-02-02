#include <cs50.h>
#include <stdio.h>

int main(void)
{
       int number = get_int ("what number do you want? \n");
       if number <1
       {
              return 1
       }
       int socham = number - 1;
       int sothang = 1;
       for (int j = 0; j < number; j++)
       {
              for (int i = 0; i < socham; i++)
              {
                     printf (".");
              }
              for (int k = 0; k < sothang; k++)
              {
                     printf("#");
              }
              sothang=sothang + 1;
              printf ("\n");socham=socham -1;
}
}