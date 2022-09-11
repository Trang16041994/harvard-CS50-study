#include<cs50.h>
#include<stdio.h>

int main (void)
{
    int n = get_int("so luong");
    //khai bao mang so nhap n
    int sonhap[n];
    for (int i = 0; i < n; i++)
    {
        //lay dc input va cho luu
        //so nhap[i] la de luu va truy cap vao ki tu thu i cua mang sonhap
        sonhap[i] = get_int("so may");
    }
    int lonnhat = 0;
    for(int i = 0; i < n; i++)
    {
//so sanh voi 0 de tim ra so lon hon va luu lai
        if(lonnhat<sonhap[i])
        {
    //nd tim ra so lonhat
            lonnhat=sonhap[i];
        }
    }
    printf("so lon nhat%d\n",lonnhat);
}