// smart_malloc.c
#include "smart_malloc.h"

#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define _STR(x) #x
#define INVALID_MEMORY_SIZE 0
#define MEMORY_BLOCK_METADATA_SIZE sizeof(memory_block_metadata)

#define SAFETY_ASSERT(expression) \
    if (!(expression)) { \
        write(STDERR_FILENO, "Assertion failed: " #expression ", file " __FILE__ ", line " _STR(__LINE__) ".\n", 100); \
        abort(); \
    }

struct memory_block_metadata {
    int allocation_id;
    size_t size;
    struct memory_block_metadata *next_block;
    
    time_t allocation_time; // Timestamp when the block was allocated
    time_t last_access_time; // Timestamp of the last access to this block
};

void smart_free(void* pointer) {
    if (!pointer) return;
    struct memory_block_metadata *block_metadata = (struct memory_block_metadata *)((char *)pointer - sizeof(struct memory_block_metadata));
}

void *smart_malloc(size_t size) {
    if (size <= INVALID_MEMORY_SIZE)
        return NULL;

    void *first_address_block = sbrk(0);
    void *initial_address_memory = sbrk(size);

    if (initial_address_memory == (void *) -1)
        return NULL;

    SAFETY_ASSERT(first_address_block == initial_address_memory);
    return initial_address_memory;
}
