#include<stdio.h>
void put1(const char*);
int put2(const char*);

int main(void)
{
    put1("If i'd as much money");
    put1("as i could spend,\n");
    printf("I count %d characters.\n", put2("I never would cry old chairs to mend.") );

    return 0;
}


void put1(const char* string)
{
    while (*string != '\0')
        putchar(*string++);//等同 putchar(*string); *string++;
}


int put2(const char* string)
{
    int count =0;
    while (*string)
    {
        putchar(*string++);     //等同putchar(*string);*string++;
        count++;
    }
    putchar('\n');              //不统计换行符

    return count;
}