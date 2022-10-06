#ifndef _CONVERSION_H
#define _CONVERSION_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdarg.h>
int exponent(int number, int power);

int hex_to_int(char str[]);

char expand(char s1[], char *s2);
#endif