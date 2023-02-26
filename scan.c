#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int count = 0;
	while (--argc)
		printf("Line: %d .... %s\n",++count,*++argv);

	return 0;
}
