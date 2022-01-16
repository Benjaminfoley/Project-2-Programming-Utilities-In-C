#include <stdio.h>

int main(int argc, char *argv[])
{
	int tracker;
	for(tracker=0; tracker<argc; tracker++)
		printf("argv[%2d]: %s\n",tracker,argv[tracker]);
	
	return 0;
}
