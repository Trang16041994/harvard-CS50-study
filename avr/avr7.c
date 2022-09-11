#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n = get_int("so luong");
    int sonhap[n];
    for(int i = 0; i < n; i++)
    {
        sonhap[i] = get_int("nhap cac so");
    }
    for(int i = 0; i < n; i++)
    if (sonhap[0] < sonhap[i])
    {
        sonhap[0] =sonhap[i];
    }
    printf("so lon nhat %d\n",sonhap[0]);
}
