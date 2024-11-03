/*
    使用strrol()
    函数原型:long strtol(const char* restrict nptr, char** restrict endptr, int base);
    nptr是指向待转换字符的指针，endptr是一个指针地址，用于标识输入数字结束字符的地址，base表示以什么进制写入
    该函数把字符串形式的数字转换为long int 类型
 */
#include<stdio.h>
#include<stdlib.h>
#define LIM 30
char* s_gets(char* st, int n);

int main(void)
{
    char number[LIM];
    char* end;
    long value;//用于接收返回值

    puts("Enter a number (empty line to quit):");
    while (s_gets(number, LIM) && number[0] != '\0')
    {
        value = strtol(number, &end, 10);       //十进制
        printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n", value, end, *end);

        value = strtol(number, &end, 16);       //十六进制
        printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n", value, end, *end);

        puts("Next number");
    }
    puts("bey\n");

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

/*
    这里是把输入进来的字符串转化为数字，并且把转不了的数值截停在stopped at后面。
    可以尝试输入10atom
    在十进制中无法识别a，所以截停atom，把10用十进制输出10
    在十六进制中能识别a，无法识别t，所以截停tom，把10a用十进制输出为266
    括号里面打印的是被截停的字符的ASCII码，
    输入10atom
    十进制截停的a，ASCII码是97
    十六进制截停的t，ASCII码是116
*/