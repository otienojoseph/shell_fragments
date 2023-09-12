#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *value;

    value = getenv("bin");

    printf("%s\n", value);
    return (0);
}
