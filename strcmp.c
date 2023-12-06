#include <stdio.h>
#include <string.h>
#include <wchar.h>

int strcmp(const char *s1, const char *s2){
    printf("strcmp hook - comparing: <%s> and <%s>\n", s1, s2);
    return 0;
}

int strncmp(const char *s1, const char *s2, size_t n){
    printf("strncmp hook - comparing: <%s> and <%s> for %zu characters\n", s1, s2, n);
    return 0;
}

int strcasecmp(const char *s1, const char *s2){
    printf("strcasecmp hook - comparing: <%s> and <%s> (case-insensitive)\n", s1, s2);
    return 0;
}

int strncasecmp(const char *s1, const char *s2, size_t n){
    printf("strncasecmp hook - comparing: <%s> and <%s> (case-insensitive) for %zu characters\n", s1, s2, n);
    return 0;
}

int memcmp(const void *s1, const void *s2, size_t n){
    printf("memcmp hook - comparing memory areas for %zu bytes\n", n);
    return 0;
}

int strcoll(const char *s1, const char *s2){
    printf("strcoll hook - locale-specific comparison of <%s> and <%s>\n", s1, s2);
    return 0;
}

int wcscmp(const wchar_t *s1, const wchar_t *s2){
    printf("wcscmp hook - wide string comparison of: ");
    wprintf(L"'%ls' and '%ls'\n", s1, s2);
    return 0;
}

int wcsncmp(const wchar_t *s1, const wchar_t *s2, size_t n){
    printf("wcsncmp hook - wide string comparison for %zu characters of: ", n);
    wprintf(L"'%.*ls' and '%.*ls'\n", (int)n, s1, (int)n, s2);
    return 0;
}
