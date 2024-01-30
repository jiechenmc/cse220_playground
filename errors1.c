// errors1.c
#include <stdio.h>
#include <stdlib.h>

int bad_len(const char *str);

int main(int argc, char *argv[]) {
    char *str = NULL;
    int length = bad_len(str);
    printf("strlen: %d\n", length);
    return EXIT_SUCCESS;
}

int bad_len(const char *str) {
    int len = 0;
    if(str != NULL) {
        /* Some fancy code for computing the length */
        len = 4;
    }
    return len;
}
