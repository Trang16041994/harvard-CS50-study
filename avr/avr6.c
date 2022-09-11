#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n = get_int("so luong");
    int sonhap[n];
    for(int i = 0; i < n; i ++)
    {
        sonhap[i] = get_int("nhap di");
    }
    int solont1 = 0;
    for(int i = 0; i < n; i ++)
    {
        if(solont1 < sonhap[i])
        {
        solont1 = sonhap[i];
        }
    }
    int solont2 = 0;
    for(int i = 0; i < n; i ++)
    {
        //dk sonhapi khac solon t1 dk sai
        if(sonhap[i] ! solont1 && solont2 < sonhap[i])
        {
            solont2=sonhap[i];
        }
    }
    printf("so lon t 2 la: %d\n", solont2);
}