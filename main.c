#include<stdio.h>
#include<stdlib.h>
#include "main.h"

int main(int argc, char **argv)
{
    int arg_num = 0;

    while(--argc)
        printf("arg# %d - %s\n", ++arg_num,  *++argv);
    
    printf("About to return 0\n");

    return 0;
}
