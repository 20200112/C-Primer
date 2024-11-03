#define MSG "I'm special"

#include <stdio.h>
int main(void)
{
    char ar[] = MSG;
    const char *pt = MSG;
    printf("address of \"I'm special\":%p\n", "I'm special");
    printf("            address ar:  %p\n", ar);
    printf("            address pt:  %p\n", pt);
    printf("        address of MSG:  %p\n", MSG);
    printf("address of \"I'm special\":%p\n", "I'm special");

    return 0;
}
//这里说明数组是单独存一份，数组是复制字面量的
//用指针指向字面量可以节约内存
//如果打算修改字符串，就不要用指针指向字符串字面量