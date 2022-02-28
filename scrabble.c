#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
if(score1 < score2) {
        printf("play 2 is winer \n");
    }
else if(score1 > score2){
    printf("play 1 is winer \n");
}
else{
    printf("tie\n");
}
}
// TODO: Compute and return score for string

    int compute_score(string word) {
    int sum = 0;

    for(int i = 0; i < strlen(word); i++) {
        if(word[i] >= 'A'&& word[i] <= 'Z')
            word[i] = word[i] + 32;
}


    for (int i = 0; i < strlen(word); i++) {
        int diem= word[i]-'a';
        sum = POINTS[diem] + sum ;
    }
    printf("%d\n", sum);
    return sum;
    // TODO: Compute and return score for string
}