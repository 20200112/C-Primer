#include<stdio.h>
#include<string.h>
/*
string中：
char* strchr(const char* s, int c);
如果s字符串中包含c字符，该函数返回指向s字符串首位置的地址（空字符也在查找范围内）
如果在字符串s中未找到c字符，该函数返回空指针
例如：
char* p = strchr("abcb", 'b');
p则指向第一个b的地址
可以查找'\0'
*/
#include<ctype.h>
/*
ctype中：
toupper()把字符转为大写,
ispunct()用于检测一个字符是否为标点符号
*/
#define LIMIT 81
void ToUpper(char*);//把字符数组（字符串）全部转成大写
int PunctCount(const char*);//统计字符串中标点的个数

int main(void)
{
    char line[LIMIT];
    char* find;

    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n');
    if (find)  //if(find != null)
        *find = '\0';
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));

    return 0;
}   

void ToUpper(char* str)
{
    while(*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char* str)
{
    int ct = 0;
    while(*str)
    {
        if (ispunct(*str))
            ct++;
        str++;
    }

    return ct;
}