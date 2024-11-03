#include<stdio.h>
#define ANSWER "Grant"
#define SIZE 40
char* s_gets(char* st, int n);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while(try != ANSWER)//问题出在这里，这里是两个数组的首元素的地址比较。键盘录入的是数组try的地址，无论如何都不可能和字面量的地址一样，所以无法比较得出两个单词是否相同
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

//然后就用到字符串内容比较的函数。strcmp()见清单compare.c