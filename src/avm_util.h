#ifndef _AVM_UTIL_H
#define _AVM_UTIL_H
#include "asprintf.h"
#include "avm_util.h"
#include <stdio.h>

void *my_malloc(size_t size);
void *my_calloc(size_t count, size_t size);
void *my_crealloc(void *buffer, size_t oldsize, size_t newsize);
void *my_realloc(void *buffer, size_t newsize);
#define my_free(p)  { free(p); p = NULL; }

size_t min(size_t a, size_t b);

/* Reads the file until error or EOF
 */
char *read_file(FILE *file, size_t *len);

int asizet_add_bounds_check(avm_size_t address, avm_size_t size);

/* Sets an error code on the context with the given format
 * string and args.
 *
 * Returns failure so that `return error(...);` is useful
 */
int avm__error(AVM_Context *ctx, const char *fmt, ...);

#endif
