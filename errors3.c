#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int bad_len(const char *str);

int main(int argc, char *argv[]) {
	char *str = "Debugging in C is so awesome.";
	int length = bad_len(str);
	printf("strlen: %d\n", length);
	return EXIT_SUCCESS;
}

int bad_len(const char *str) {
	int len = 0;
	assert(str != NULL);
	if(str != NULL) {
		/* Some fancy code for computing the length */
		len = 4;
	}
	return len;
}