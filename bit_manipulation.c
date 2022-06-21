#include "bit_manipulation.h"

/**
 * getbits - gets the range of bits starting at the position which is passed as the second parameter
 * @x: the value where the bit is to be gotten from
 * @position: the postion where the function starts extracting the bits
 * @n: the range of bits to be extracted, starting from the position being passed as the second parameter
 * Return: returns the integer value of the extracted bits
 */

int getbits(unsigned x, int position, int n)
{
    return ((x >> position + 1 - n) & ~(~0 << n));
}

/**
 * getbit - gets the bits at the position which is passed as the second parameter
 * @x: the value where the bit is to be gotten from
 * @position: the postion where the function starts extracting the bit
 * Return: returns the integer value of the extracted bit
 */

int getbit(unsigned x, int position)
{
    return ((x >> position) & ~(~0 >> position - position + 1));   
}

/**
 * setbit - sets a bit at a given position from 0 to 1
 * @x: the value where the bit is to be set, given the position as the second parameter
 * @position: the postion where the function sets the bit
 * Return: returns the integer value of the bits after a bit is been set at a specified position
 */

int setbit(unsigned x, int position)
{
    return ((x) | (1 << position));
}

/**
 * remove_bit - removes a bit at a given position from 1 to 0
 * @x: the value where the bit is to be removed, given the position as the second parameter
 * @position: the postion where the function removes the bit
 * Return: returns the integer value of the bits after a bit is been removed at a specified position
 */

int remove_bit(unsigned x, int position)
{
    return ((x) & ~(1 << position));
}