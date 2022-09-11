#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        //tra lai gt cua ham 1 la loi khac 0 la loi
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    // tra lai gt cua ham 0 la ko loi
    return 0;
}