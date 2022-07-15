#include <stdio.h>

void say_ten_times(char *sentance)
{
    for (int i = 0; i < 10; i++)
    {
        puts(sentance);
    }
}

int main(int argc, char **argv)
{
    say_ten_times("Hello, world!");
    return 0;
}