#ifndef _BIT_MANIPULATION_H
#define _BIT_MANIPULATION_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <errno.h>

int getbits(unsigned x, int position, int n);

int getbit(unsigned x, int position);

int setbit(unsigned x, int position);

int remove_bit(unsigned x, int position);
#endif