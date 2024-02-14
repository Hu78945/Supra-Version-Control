#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functionsDef.h"

void supra_init()
{
    printf("Initialized Supra repository\n");
    // Implement initialization logic here
}

void supra_add(const char *file)
{
    printf("Added file '%s' to staging area\n", file);
    // Implement add logic here
}

void supra_commit(const char *message)
{
    printf("Committed changes with message: '%s'\n", message);
    // Implement commit logic here
}
