#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c) {
    return putchar(c);
}

int _islower(int c) {
    return islower(c);
}

int _isalpha(int c) {
    return isalpha(c);
}

int _abs(int n) {
    return abs(n);
}

int _isupper(int c) {
    return isupper(c);
}

int _isdigit(int c) {
    return isdigit(c);
}

int _strlen(char *s) {
    return strlen(s);
}

void _puts(char *s) {
    puts(s);
}

char *_strcpy(char *dest, char *src) {
    return strcpy(dest, src);
}

int _atoi(char *s) {
    return atoi(s);
}

char *_strcat(char *dest, char *src) {
    return strcat(dest, src);
}

char *_strncat(char *dest, char *src, int n) {
    return strncat(dest, src, n);
}

char *_strncpy(char *dest, char *src, int n) {
    return strncpy(dest, src, n);
}

int _strcmp(char *s1, char *s2) {
    return strcmp(s1, s2);
}

char *_memset(char *s, char b, unsigned int n) {
    return memset(s, b, n);
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    return memcpy(dest, src, n);
}

char *_strchr(char *s, char c) {
    return strchr(s, c);
}

unsigned int _strspn(char *s, char *accept) {
    return strspn(s, accept);
}

char *_strpbrk(char *s, char *accept) {
    return strpbrk(s, accept);
}

char *_strstr(char *haystack, char *needle) {
    return strstr(haystack, needle);
}

