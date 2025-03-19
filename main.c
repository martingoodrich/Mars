#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    while(--argc)
        printf("%s\n", *++argv);
    
    printf("About to return 0\n");

    return 0;
}
