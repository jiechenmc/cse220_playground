#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
        int *var = malloc(sizeof(int));
        // Assign a value
        *var = 4;
        // Print the value
        printf("The value of var is: %d\n", *var);
        printf("Out of bounds access: %s\n", argv[-1]);
        free(var);
        return EXIT_SUCCESS;
}
