#include<cs50.h>
#include<stdio.h>
//cho 1 mang lay tp tung mang cong trung mang
int main(void)
{
    int n = get_int ("so");
    //mang so nhap kich thich n, cach khai bao mag
    int sonhap[n];
    for(int i = 0; i < n; i++)
    {
        //phan tu thu i cua mang so nhap
        // get int la ham
        sonhap[i] = get_int("so i");
    }
    // In ra tung phan tu cua mang sonhap
    for(int i=0; i<n;i++)
    {
        printf("%d\n", sonhap[i]);
    }
//khai bao bien tong kieu int
    int tong;
    //gan gt cua tong bd la 0
    tong = 0;
    for(int i=0; i <n; i++)
    {
        //tong = tong 0 + so nhap trong mang i
        tong = tong + sonhap[i];
    }
    printf("tong tb %d\n", (tong/n));
}