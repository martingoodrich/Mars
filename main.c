#include<stdio.h>
#include<stdlib.h>
#include "main.h"
#include "message.h"

int main(int argc, char **argv)
{
    int arg_num = 0;

    printf("argc = %d\n",argc);

    while(--argc)
        printf("arg# %d - %s\n", ++arg_num,  *++argv);
    
    print_message("About to return 0\n");

    return 0;
}
