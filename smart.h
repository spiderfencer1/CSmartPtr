#include <stdlib.h>
void smart_free(void* v) { free(*((void**)v)); }
#define smart __attribute__((cleanup(smart_free)))
