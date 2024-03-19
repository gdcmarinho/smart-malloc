// smart_malloc.h
#ifndef SMART_MALLOC_H
#define SMART_MALLOC_H

#include <stddef.h>

/**
 * Allocates a memory block of the specified size, with additional smart memory
 * management functionalities.
 *
 * @param size The size of the memory block to be allocated, in bytes.
 * @return A pointer to the allocated memory block, or NULL if the allocation fails.
 */
void *smartMalloc(size_t size);

#endif // SMART_MALLOC_H
