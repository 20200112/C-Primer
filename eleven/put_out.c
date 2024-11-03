#include<stdio.h>
#define DEF "I am a #defined string."

int main(void)
{
    char str1[80] = "An array was initialized to me.";
    const char* str2 = "A pointer was initialized to me";

    puts("I'm an argument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    printf("%c\n",str1[5]);
    printf("%p\n", str1);//在 C 语言中，数组名（如 str1）在表达式中通常会被自动转换为指向其第一个元素的指针。因此，str1 实际上代表的是 &str1[0]，即数组 str1 的第一个元素的地址。
    printf("%p\n", str1[5]);//这里打印的是r的地址,r在ASCII表上是114在十六进制是72，地址打印的是十六进制72
    printf("%p\n", &str1);//这里更偏向是这整个数组的地址，也就语义的问题
    puts(str2 + 4);//puts 会从提供的指针开始打印，直到遇到字符串的结束符 \0（空字符），这标志着字符串的结束。

    return 0;
}