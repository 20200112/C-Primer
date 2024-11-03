//读入字符串并排序
#include<stdio.h>
#include<string.h>
#define SIZE 81     /*限制字符串长度，包括\0*/
#define LIM 20      /*可读入的最多的行数*/
#define HALT ""     /*空字符串停止输入*/
void stsrt(char* string[], int num);
char* s_gets(char* st, int n);

int main(void)
{
    char input[LIM][SIZE];      //存储输入的数组
    char* ptstr[LIM];           //内含指针变量的数组
    int ct = 0;                 //输入计数
    int k;                      //输出技术

    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the Enter key at a line's start.\n");
    while(ct <LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];      //设置指针指向字符串
        ct++;
    }
    stsrt(ptstr,ct);                //字符串排序函数
    puts("\nHere's the sorted list:\n");
    for(k = 0; k < ct; k++)
        puts(ptstr[k]);

    return 0;
}

//字符串-指针-排序函数
void stsrt(char* strings[], int num)
{
    char* temp;
    int top, seek;


    //冒泡排序（输入顺序为dd，aa，cc，bb）
/*
     第一次外循环       第一轮内循环前 strings[0] = dd, strings[1] = aa( 源 )
    （1：dd和aa比）     第一轮内循环后 strings[0] = aa, strings[1] = dd( 变 )
    （2：aa和cc比）     第二次内循环后 strings[0] = aa, strings[2] = cc(不变)
    （3：aa和bb比）     第三次内循环后 strings[0] = aa, strings[3] = dd(不变)
    源    内1后  内2后   内3后
    dd--> aa-->  aa-->  aa
    aa    dd     dd     dd
    cc    cc     cc     cc
    bb    bb     bb     bb

    第二轮外循环就是strings[1]和strings[2]比，strings[1]和strings[3]比。完了之后bb会排到最前面
*/
    for(top = 0; top < num -1; top++)
        for(seek = top + 1; seek < num; seek++)
            if(strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}

char* s_gets(char* st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val) //这里等于ret_val != NULL
    {
        while (st[i] != '\n' && st[i] !='\0')
        {
            i++;
        }
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}