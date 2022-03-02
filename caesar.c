#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_digital(string s);
char rotate(char p, int n);

int main(int argc, string argv[])
{
    if (!only_digital(argv[1])){
        return 1;
    }
    int a = atoi(argv[1]);

    string p = get_string("plain text");
    string c = p;
    for(int i = 0; i < strlen(p); i++) {
         c[i] = rotate(p[i],a);
    }
    printf("ciphertext: %s", c);
}
bool only_digital(string s)
{
    for(int i= 0; i < strlen(s); i++) {
        if(! (s[i] >= '0' && s[i] <= '9')){
            return false;
        }
    }
    return true;
    }
char rotate(char p, int n)
{
    char p_so = p - 'a';
    char c_so = ((int)p_so + n) %26;
    char c = 'a' + c_so;
    return c;


}