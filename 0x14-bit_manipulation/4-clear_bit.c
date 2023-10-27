#include "main.h"

/**
* clear_bit - sets the value of a given bit to 0
* @n: a pointer to the number to be modified
* @index: the position of the bit to be set to 0
*
* Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
