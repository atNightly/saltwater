// http://port70.net/~nsz/c/c11/n1570.html#7.19

#ifndef __STDC_STDDEF_H
#define __STDC_STDDEF_H
typedef long ptrdiff_t;
typedef unsigned long size_t;
typedef long max_align_t;
// Unicode is at most 32-bits per character
typedef int wchar_t;
typedef __builtin_va_list va_list;
// glibc is awful and I hate it
typedef __builtin_va_list __gnuc_va_list;

#define NULL 0
#define offsetof(type, member) (saltwater does not currently support offsetof)
#endif
