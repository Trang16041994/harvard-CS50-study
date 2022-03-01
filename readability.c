#include <cs50.h>
#include <stdio.h>
#include <string.h>

int countletter(string n);
int countword(string n);
int countsentences(string n);
int main(void)
{
    string n = get_string("nhap thu");
    int sum = countletter(n);
    int sumword = countword(n);
    int sumsentences = countsentences(n);
    float L= (float)sum/(float)sumword*100;
    float S= (float)sumsentences/(float)sumword *100;
    float index = 0.0588 * L - 0.296 * S - 15.8;

        if( index < 1){
        printf("Before Grade 1\n");
        }
        if(index > 16) {
            printf("Grade 16+\n");
        }
        if(index >= 1 && index <=16) {
            printf("Grade %0.0f\n", index);
        }
}

int countletter(string n)
{
    int sum = 0;
    for(int i = 0; i < strlen(n); i++){
        if(('a' <= n[i] && n[i] <= 'z') || ('A' <= n[i] && n[i] <='Z')){
            sum= sum + 1;
        }
    }
return sum;
}
int countword(string n) {
    int sumword = 1;
    for(int i = 0; i < strlen(n); i++) {
        if(n[i] == ' '){
            sumword = sumword + 1;
        }
    }
    return sumword;
}
int countsentences(string n) {
    int sumsentences = 0;
    for(int i = 0; i < strlen(n); i++) {
        if(n[i] == ('.') || n[i]=='?' ||n[i]=='!'){
            sumsentences = sumsentences + 1;
        }
    }
    return sumsentences;
}