#include <stdlib.h>
#include <stdio.h>

#ifdef DEBUG
	#define debug(fmt, ...) printf("DEBUG: %s:%s:%d " fmt, __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
	#define debug(fmt, ...)
#endif

int main(int argc, char *argv[]) {
	debug("Program has %d args\n", argc);
	printf("Hello, World!\n");
	return EXIT_SUCCESS;
}