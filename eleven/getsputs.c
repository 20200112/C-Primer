#include<stdio.h>
#define STLEN 81

int main(void){
    char words[STLEN];

    puts("Enter a string, please.");
    gets(words);
    printf("Your string twice:\n");
    printf("%s\n",words);
    puts(words);
    puts("Done.");
    return 0;
}
//这个警告信息的意思是，你在代码中使用了 gets() 函数，而编译器警告你这是一种不安全的做法，建议使用 fgets() 代替。
//gets在C99中不被建议使用，在C11中直接被废除