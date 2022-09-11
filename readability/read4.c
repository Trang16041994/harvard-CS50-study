#include<cs50.h>
#include<stdio.h>

void swap(int *number1, int *number2){
    int ter;
    ter = *number1;
    *number1 = *number2;
    *number2 = ter;
}
int main(){
    int no1, no2;
    scanf("%d%d", &no1, &no2);

    swap(&no1, &no2);

    printf("so thu nhat la %d\n", no1);
    printf("so thu hai la %d\n", no2);
    return 0;
}