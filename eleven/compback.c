//strcmp()的返回值
#include<stdio.h>
#include<string.h>
int main(void)
{
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A","A"));

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A","B"));

    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B","A"));

    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C","A"));

    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z","a"));

    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples","apple"));

    return 0;
}
//strcmp()在两个值相同的时候返回0，不同的时候前面的数比后面的数大则返回1，后面的数比前面的数大返回-1
//在某些编译器里会返回两个值之间的差值上面的信息会有(0,-1,1,2,-7,115)
//所以大多情况下具体的返回值并不重要，重点关注的是0还是非0;
//strcmp比较的是字符串，所以不能比较字符，请不要用''单引号。