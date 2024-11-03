#include<stdio.h>
int main(void)
{
    char note[] = "see you at the snack bar";
    char* ptr;

    ptr = note;
    puts(ptr);      //"see you at the snack bar"
    puts(++ptr);    //"ee you at the snack bar"     先++再打印

    note[7] = '\0';
    puts (note);    //"see you"     这里打印的是note
    puts(ptr);      //"ee you"      这里打印的是ptr
    puts(++ptr);  //"ee you"        先++再打印
}