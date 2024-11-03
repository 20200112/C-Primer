#include<stdio.h>
int main(void)
{
    char name1[11];
    char name2[11];
    int count;

    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2); //sancf函数的返回值是一个整数，该值等于scanf（）成功读取的项数或读到结尾的时返回的EOF。所以这里count被赋值为2
    printf("I read the %d names %s and %s", count, name1, name2);

    return 0;
}
/*请分别输入
Jesse Jukes
Liza Applebottham
Portensia Callowit

你会发现第一次没问题
第二次：别截断了两个字符
第三次：前面的人名仅剩Portr，因为被截断了，所以后面的nsia被存到缓冲区，直到第二次输出才被读取。由于scanf读到空格会截断所以后面Callowit没有了
*/