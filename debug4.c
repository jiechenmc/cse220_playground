#include <stdlib.h>
#include <stdio.h>

#define debug(msg) printf("DEBUG: %s", msg)

int main(int argc, char *argv[]) {
	#ifdef DEBUG
		debug("Debug flag was defined\n");
	#endif
	printf("Hello, World!\n");
	return EXIT_SUCCESS;
}