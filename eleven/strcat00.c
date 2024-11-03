#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[30] = "abc";
    char str2[5] = "defg";

    printf("str1_adress_before:%p\n", &str1);
    char* p = strcat(str1, str2); //这里说明返回值是的拼接之后的，前面的字符串的地址，地址用指针来指
    puts(str1);
    puts(p);
    puts(str2);
    printf("str1_adress_after:%p\n", &str1);

    return 0;
}
//这里说明了str1变了，str2没变
//strcat()会把前面字符串最后的\0去掉
//strcat()无法检查第一个数组是否能容纳第二个字符串