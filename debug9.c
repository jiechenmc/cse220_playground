#include <stdlib.h>
#include <stdio.h>

#ifdef DEBUG
	#define debug(fmt, ...) do{printf("DEBUG: %s:%s:%d " fmt, __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);}while(0)
	#define info(fmt, ...) do{printf("INFO: %s:%s:%d " fmt, __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);}while(0)
#else
	#define debug(fmt, ...)
	#define info(fmt, ...) do{printf("INFO: " fmt, ##__VA_ARGS__);}while(0)
#endif

int main(int argc, char *argv[]) {
	debug("Program has %d args\n", argc);
	printf("Hello, World!\n");
	info("Info statement. Should print out always, with varying amounts of information depending on flags provided.\n");
	return EXIT_SUCCESS;
}