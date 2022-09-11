#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n = get_int("nhap so le: ");
     if (n % 2 == 0)
     {
         return false;
     }
     int socham = n +1/2-1;
     int sothang = 1;
     int socham2= n+1/2-1;
     //chieu doc
     for(int i = 0; i < n/2+1; i++)
     {
     //chieu ngang
        for (int t = 0; t < socham ; t++)
        {
         printf(".");
        }
        for(int k = 0; k < sothang; k++)
        {
            printf("#");
        }
        for(int l = 0; l < socham2; l++)
        {
            printf(".");
        }
     socham = socham - 1 ;
     sothang = sothang + 2;
     socham2 = socham2 - 1;
     printf("\n");
     }
}