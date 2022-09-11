#include<cs50.h>
#include<stdio.h>

int solon(int so1, int so2)
{
    if(so1<so2)
    {
        return so2;
    }
    else return so1;
}
int main(void)
{
    int so1,so2;
    int solonnhat;
    so1 = get_int("so 1");
    so2 = get_int("so 2");
    solonnhat=solon(so1,so2);
    printf("so lon nhat %d\n", solonnhat);
}