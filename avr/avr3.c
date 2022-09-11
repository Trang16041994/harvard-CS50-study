#include<cs50.h>
#include<stdio.h>
int main (void)
{
    int n1 = get_int ("trang");
    int n2 = get_int ("nam");
    if (n1>n2)
    {
    printf("Nam thua\n");
    }
    else if (n1<n2)
    {
    printf("Nam mai mai thua trang\n");
    }
    else
    {
        printf("loi roai\n");
    }

}