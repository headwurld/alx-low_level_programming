#include "main.h"

/**
* set_bit - assigns a value of 1 to the bit at a specified position
* @n: a pointer to the number to be modified
* @index: the position of the bit to be set to 1
*
* Return: 1 for success, -1 for failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
