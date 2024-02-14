// supra.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functionsDef.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <command>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "init") == 0)
    {
        supra_init();
    }
    else if (strcmp(argv[1], "add") == 0)
    {
        if (argc < 3)
        {
            printf("Usage: %s add <file>\n", argv[0]);
            return 1;
        }
        supra_add(argv[2]);
    }
    else if (strcmp(argv[1], "commit") == 0)
    {
        if (argc < 3)
        {
            printf("Usage: %s commit <message>\n", argv[0]);
            return 1;
        }
        supra_commit(argv[2]);
    }
    else
    {
        printf("Invalid command: %s\n", argv[1]);
        return 1;
    }

    return 0;
}
