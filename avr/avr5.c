#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n = get_int("so luong");
    int sonhap[n];
    for (int i = 0; i < n; i++)
    {
        sonhap[i] = get_int("nhap so vao");
    }
    int sobenhat=10000;
    for (int i = 0; i < n; i++)
        {
        if(sobenhat>sonhap[i])
        {
            sobenhat=sonhap[i];
        }
    }
    printf("so be nhat %d\n", sobenhat);
}