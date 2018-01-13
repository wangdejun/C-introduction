#include <stdio.h>

int main(int argc, char* argv[])
{
    for(int i=0; i<argc; i++){
        printf("%s \n", argv[i]);
    }
    return 0;
}

/*
 * compile command : g++ -o argc.out argc.cpp
 */