#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    string word1 = get_string("player1: ");
    //strlen tinh do dai cua input
    printf("%lu\n", strlen(word1));
}

