#pragma once
#include <stddef.h>
#include <stdlib.h>

typedef struct {
	size_t bytes;
}csh_BulkAllocator;


csh_BulkAllocator* csh_createBulkAllocator(size_t bytes);

// malloc and free
// malloc will fail if requested size is not available
void* csh_mallocBulkAllocator(csh_BulkAllocator* allocator, const size_t bytes);
void csh_freeBulkAllocator(csh_BulkAllocator* allocator);

// get available bytes in bulk
size_t csh_getFreeSpaceBulkAllocator(csh_BulkAllocator* allocator);