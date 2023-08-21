#include "main.h"
#include <stdio.h>

int main(void) {
    const char *text = "Hello, World!";
    size_t length = _strlen(text);
    printf("Length of the string: %zu\n", length);
    return 0;
}

