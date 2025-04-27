#include <stdio.h>
#include "genesis.h" 

int main() {
    printf("Testing gdate():\n");
    gdate(4, 27, 2025);
    printf("\n\n");

    printf("Testing gupper():\n");
    char lower_string[] = "hello world!";
    printf("Original: %s\n", lower_string);
    gupper(lower_string);
    printf("Uppercase: %s\n\n", lower_string);

    printf("Testing glen():\n");
    char sample_string[] = "genesis";
    int length = glen(sample_string);
    printf("String: %s\nLength: %d\n\n", sample_string, length);

    printf("Testing gcpy():\n");
    char source[] = "C programming";
    char destination[50];  // Make sure destination is large enough
    gcpy(destination, source);
    printf("Copied string: %s\n", destination);

    return 0;
}
