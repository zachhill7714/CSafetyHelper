#pragma once
#include <stddef.h>


// csh_safeMalloc will call this callback if it fails
void csh_setSafeMallocCallback(void (*callback)(void*));
void* csh_safeMalloc(const size_t bytes);