#include<stdio.h>
#include<string.h>

int main(void)
{
    char food[] = "Yummy";
    char* ptr;

    ptr = food + strlen(food);   //food+5，即指向末尾food[5],'\0'
    while (--ptr >= food)        //food[4] >= food[0]
    {
        puts(ptr);               //y,my,mmy,ummy,Yummy
    }
     
     return 0;
}