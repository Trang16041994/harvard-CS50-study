#include<cs50.h>
#include<stdio.h>

void show(string n) {
    printf("Hello %s\n", n);
}
int main(void) {
    string n = get_string("nhap ten");
    show(n);
}