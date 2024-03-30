#include <stdio.h>
#include <string.h>

#include "smart_malloc.h"

int main() {
    int byteSizeHelloWorld = strlen("Hello World\n");
    smart_malloc(byteSizeHelloWorld);

    return 0;
}