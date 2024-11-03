//格式化字符串
#include<stdio.h>
#define MAX 20
char* s_gets(char* st, int n);

int main(void)
{
    char first[MAX];
    char last[MAX];
    char formal[2 * MAX + 10];
    double prize;

    puts("Enter your first name:");
    s_gets(first, MAX);
    puts("Enter your last name:");
    s_gets(last, MAX);
    puts("Enter your prize money:");
    scanf("%lf",&prize);
    sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);//这个函数不会打印到屏幕上，只会把后面的参数输入到第一个参数里，然后你可以打印第一个参数
    puts(formal);

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