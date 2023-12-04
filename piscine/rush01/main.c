#include <stdio.h>

char *function1(void)
{
    char    *text;

    // aquí usamos y damos valor a text

    return text; // esto no lo hagáis
}

char *function2(void)
{
    char    *text;

    text = malloc(42 * sizeof(char));
    if (text == NULL)
        return NULL;
    // aquí usamos y damos valor a text

    return text; // esto no lo hagáis
}

int main(int ac, char **av)
{
    // aquí va el código del programa
    printf("%i\n", argc);

    char *t = function2();
    // usamos t;
    free(t);
}

/*

zsh> ./a.out uno dos tres

[0] ./a.out\0
[1] uno\0
[2] dos\0
[3] tres\0
[4] NULL

*/
