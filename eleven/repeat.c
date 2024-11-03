//带参数的main()
#include<stdio.h>
int main(int argc, char** argv)     //或者写成(int argc, char* argv[])
{
    int count;

    printf("The command line has %d arguments:\n", argc - 1);
    for(count = 1; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");
    
    return 0;
}
/*
    如果是用" "的话，那么就算里面有空格也会被当成一个参数
    例如：repear "I am hungry" now
    会把"I am hungry"赋值给argv[1], 把"now"赋值给argv[2]
*/