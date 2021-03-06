/*
** EPITECH PROJECT, 2019
** my_strncmp.c
** File description:
** Compares two given string pointers for the n first bytes
*/

#include "my_string.h"

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    register unsigned char c1;
    register unsigned char c2;

    if (s1 == s2 || n == 0)
        return (0);
    while (n--) {
        c1 = (unsigned char) *s1++;
        c2 = (unsigned char) *s2++;
        if (c1 != c2)
            return (c1 - c2);
        if (c1 == '\0')
            return (0);
    }
    return (0);
}
