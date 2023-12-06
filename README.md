LD_PRELOAD String Comparison Hook

This repository contains a shared library for hooking various string comparison functions in C. It's designed for use in CTF challenges or educational purposes to demonstrate the LD_PRELOAD trick.
## Features

    Hooks common string comparison functions: strcmp, strncmp, strcasecmp, strncasecmp, memcmp, strcoll, wcscmp, wcsncmp.
    Logs string comparisons to the console for monitoring.

## Prerequisites

  - Linux environment
  - GCC compiler

## Usage

  1. Compile your target executable (if not already compiled).
```
gcc -o string_hooks.so -fPIC -shared string_hooks.c
```
  2. Set LD_PRELOAD to the path of the compiled string_hooks.so:
```
LD_PRELOAD=$PWD/string_hooks.so ./your_target_executable
```
  3. Run and observe the output for string comparisons made by the executable.

## Included Hooks

- [x] `int strcmp(const char *s1, const char *s2)`
- [x] `int strncmp(const char *s1, const char *s2, size_t n)`
- [x] `int strcasecmp(const char *s1, const char *s2)`
- [x] `int strncasecmp(const char *s1, const char *s2, size_t n)`
- [x] `int memcmp(const void *s1, const void *s2, size_t n)`
- [x] `int strcoll(const char *s1, const char *s2)`
- [x] `int wcscmp(const wchar_t *s1, const wchar_t *s2)`
- [x] `int wcsncmp(const wchar_t *s1, const wchar_t *s2, size_t n)`
