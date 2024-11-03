//拼接两个字符串，检查第一个数组的大小
#include<stdio.h>
#include<string.h>
#define SIZE 30
#define BUGSIZE 13
char * s_gets(char* st, int n);

int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shose.";
    char bug [BUGSIZE];
    int availabe;

    puts("What is your favourite flower?");

    s_gets(flower, SIZE);
    if((strlen(addon) + strlen(flower) +1) <= SIZE)
        strcat(flower, addon);

    puts(flower);
    puts("What is your favourite bug?");

    s_gets(bug, BUGSIZE);
    availabe = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, availabe);

    puts(bug);

    return 0;
}

char* s_gets(char* st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val) //这里等于ret_val != NULL
    {
        while (st[i] != '\n' && st[i] !='\0')
        {
            i++;
        }
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}

//简单来说strncat比strcat多了个参数，这第三个参数能防止缓冲区溢出，因为第三个参数是限定了允许添加的个数的上限.