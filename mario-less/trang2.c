#include<cs50.h>
#include<stdio.h>

void inCham(int socham)
{
    for (int i=0;i<socham;i++)
    {
        printf(" ");
    }
}

void inThang(int sothang)
{
    for (int i=0;i<sothang;i++)
    {
        printf("*");
    }
}

void hangdoc(int n)
{
    int socham = (n - 1)/2;
    int sothang = 1;
    for(int i = 0; i < n/2+1; i++)
    {
        inCham(socham);
        inThang(sothang);
        inCham(socham);
        printf("\n");
        sothang=sothang+2;
        socham=socham-1;
    }
}
int main(void)
{
    int n = get_int("nhap so le: ");
     if (n % 2 == 0)
     {
         return false;
     }
     hangdoc(n);
}