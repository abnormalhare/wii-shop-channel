/* ================================================================ *
 *  This file is for declaring various C/C++ function signatures temporarily.
 *  This allows for decompiling without relying on any MSL decompilation existing first.
 * ================================================================ */

#ifndef TEMP_H
#define TEMP_H

#ifndef COMMON_H
// We expect Common.h to already be declared so we know we have access to common types
#error "Do not include this file directly! Include Common.h instead!"
#endif

#ifndef NULL
#define NULL 0
#endif

#ifdef __cplusplus
extern "C"
{
#endif

// string.h
void *memset( void *, int, size_t );
void *memcpy( void *, const void *, size_t );
char *strncpy( char *, const char *, size_t );

#ifdef __cplusplus
}
#endif

#endif
