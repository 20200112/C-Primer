#include<stdio.h>
#include<string.h>
#define LISTSIZE 6
int main(void)
{
    const char* list[LISTSIZE]=
    {
        "astronomy",
        "astounding",
        "astrophysics",
        "ostracize",
        "asterism",
        "astrophobia"
    };
    int count = 0;
    int i;

    for(i = 0; i < LISTSIZE; i++)
        if(strncmp(list[i], "astro", 5) == 0)
        {
            printf("Found: %s\n", list[i]);
            count++;
        }

    printf("The list contained %d words beginning with astro.\n",count);

    return 0;
}
//由此可知strncmp可以限定函数只查找 给定的（下面的n） 字符
//strncmp（参数1，参数2，n）