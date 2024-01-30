#include <stdlib.h>
#include <stdio.h>

#ifdef DEBUG
	#define debug(msg) printf("DEBUG: %s:%s:%d %s", __FILE__, __FUNCTION__, __LINE__, msg)
#else
	#define debug(msg)
#endif

int main(int argc, char *argv[]) {
	debug("Debug flag was defined\n");
	printf("Hello, World!\n");
	return EXIT_SUCCESS;
}