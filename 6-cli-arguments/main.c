#include <stdio.h>

int main(int argc, char** argv)
{
    printf("Amount of arguments: %d\n", argc);

    for(int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
}
