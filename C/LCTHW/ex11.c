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
    //let's make our own array of strings

    char *states[] = {
        "California", "Oregon", "Washington", "Texas"
    };

    int num_states = 4;
    i=0; // watch for this
    while(i<num_states){
        printf("states %d: %s\n",i, states[i]);
        i++;
    }
    return 0;
}