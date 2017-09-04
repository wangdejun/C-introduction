#include <stdio.h>

int main(int argc, char *argv[])
{
    // go through each string in argv
    int i=0;
    while(i<argc){
        printf("%d----\n", argc);
        printf("arg %d: %s %s %s\n", i, argv[i], *argv, argv[0]);
        i++;
    }

    return 0;
}