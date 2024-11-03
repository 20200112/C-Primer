#include<stdio.h>
#include<string.h>
#define WORDS "beast"
#define SIZE 40

int main(void)
{
    const char* orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char* ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy +7, orig);//这里变成"Be the beast\0hat you can be.\0"
    puts(copy);
    puts(ps);

    return 0;
}