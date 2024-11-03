#include<stdio.h>
#include<string.h>

#define ANSWER "Grant"
#define SIZE 40
char* s_gets(char* st, int n);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while(strcmp(try, ANSWER))//这里用到strcmp函数，这个函数只比较字符串，这里字面量"Grant\0"是6个字节,而数组try的大小有40个字节。但是只要字符串内容相同，就得到为假,循环就结束
    {
        puts("No,that's wrong.Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");

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
