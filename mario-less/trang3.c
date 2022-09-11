#include<stdio.h>
#include<cs50.h>

void incham(int socham)
{
    for(int i = 0; i< socham; i++)
    {
        printf(" ");
    }
}
void inthang(int sothang)
{
    for(int i = 0; i< sothang; i++)
    {
        printf("#");
    }
}

void hangdoc(int n)
{
    int socham = (n -1)/2;
    int sothang = 1;
    for(int i=0; i<n/2+1; i++)
    {
    incham(socham);
    inthang(sothang);
    incham(socham);
    socham=socham-1;
    sothang=sothang+2;
    printf("\n");
    }

}
int main(void)
   {

    int n = get_int("nhap so le ");
    if(n %2 ==0)
    {
        return false;
    }
    hangdoc(n);
   }
