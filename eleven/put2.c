int put2(const char* string)
{
    int count =0;
    while (*string)
    {
        putchar(*string++);     //等同putchar(*string);*string++;
        count++;
    }
    putchar('\n');              //不统计换行符

    return count;
}