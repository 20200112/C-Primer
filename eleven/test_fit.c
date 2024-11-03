//下面演示一个自定义的可以截断字符串的函数，用到了<string.h>里面的strlen()函数
#include<stdio.h>
#include<string.h>
void fit(char* ,  unsigned int);

int main(void)
{//下面是串起来的分开是为了更方便看截断的地方
    char mesg[] = "Things should be as simple as possible," "but not simpler.";

    puts(mesg);
    fit(mesg, 38);
    puts(mesg);
    puts("Let's look at some more of the string.");
    puts(mesg + 39);//不用想得那么复杂，单纯是mesg[38] --> ',' 变成了\0。这里从mesg[39] --> 'b' 开始打印，直到遇见\0.

    return 0;
}

void fit(char* string, unsigned int size)
{
    if (strlen(string) > size)
        string[size] = '\0';
}