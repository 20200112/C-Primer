#include<stdio.h>
#define NUM 80
void chtholly(char* array)
{
    printf("请输入最多80个字符");
    fgets(array, NUM + 1, stdin);
}


int main(void)
{
    char characters[NUM+1];

    chtholly(characters);
    printf("您输入的字符是:%s\n",characters);

    return 0;
}
