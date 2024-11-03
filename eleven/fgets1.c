#include<stdio.h>
#define STLEN 14

int main(void)
{
    char words [STLEN];

    //gets()不会存储换行符，fgets会存储起来
    puts("Enter a string,please.");     //“内容”\n\0
    fgets(words, STLEN, stdin);

    printf("Your string twice (puts (), then fputs() ):\n");
    puts(words);//默认会加上换行    输出: “内容”\n\0 \n
    fputs(words, stdout);   //fputs不会默认加换行，这里换行了是因为fgets里面有换行

    puts("Eneter another string,please.");
    fgets(words, STLEN, stdin);

    printf("Your string twice (puts (), then fputs() ):\n");
    puts(words);
    fputs(words, stdout);

    puts("Done.");

    return 0;
}
//fgets和fputs的用法:
/*
fgets(参数1，参数2，参数3)；
    参数1是要写入的对象
    参数2是读入字符的最大数量
    参数3是指明要读入的文件，如果要从键盘上录入数据填stdin（标准输入）
*/

/*
fputs(参数1，参数2)；
    参数1是要输出的对象
    参数2是指名它要写入的文件，如果要显示在显示器上，应当使用stdout(标准输出)
*/