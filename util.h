#ifndef __UTIL_H__
#define __UTIL_H__

#include <stddef.h>

long time_in_ms();
void read_stdin(const char* guide, char* buffer, size_t bufsize);
void safe_printf(char *piece);

#endif // __UTIL_H__
