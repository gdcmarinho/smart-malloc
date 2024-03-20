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
void *smart_malloc(size_t size);

/**
 * Frees a memory block previously allocated by smart_malloc, marking it as available
 * for future allocations and incorporating intelligent memory management features.
 *
 * @param pointer The pointer to the memory block to be freed.
 */
void smart_free(void* pointer);

#endif // SMART_MALLOC_H
