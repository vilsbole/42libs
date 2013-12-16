#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int main()
{
    char    *s;
    int     status;

    while ((status = get_next_line(-1, &s)) > 0)
    {
        printf("[%s]\n", s);
        free(s);
    }
    printf("%d\n", status);
    return (0);
}
