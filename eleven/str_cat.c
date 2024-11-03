//用strcat()拼接两个字符串
#include<stdio.h>
#include<string.h>
#define SIZE 80
char* s_gets(char* st, int n);

int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shose.";

    puts("What is your favourite flower");
    if(s_gets(flower, SIZE) )
    {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else
        puts("End of file encountered");
    puts("bye");

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

//这是一个自定义输出函数，如果主函数没有#include<stdio.h>则会报错