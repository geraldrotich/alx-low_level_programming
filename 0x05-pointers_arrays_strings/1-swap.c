#include "main.h"
/**
 * swap_int - function
 *
 * @a: pointer of parameter
 * @b: pointer of parameter
 */
void swap_int(int *a, int *b)
{
	int swapVar;

	swapVar = (*a);
	(*a) = (*b);
	(*b) = swapVar;
}
