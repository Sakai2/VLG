#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 0;

    char ch;
    FILE *f;
    f = fopen(argv[1], "r");
    while((ch = getc(f)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(f);
    return 1;
}
