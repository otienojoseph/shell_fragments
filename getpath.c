#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *path_env;

    if (argc < 2)
    {
        printf("Usage: %s filename\n", argv[0]);
    }

    path_env = getenv(argv[1]);
    printf("%s\n", path_env);

    return (0);
}
