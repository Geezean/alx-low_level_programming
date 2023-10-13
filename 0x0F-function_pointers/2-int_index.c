#include <stdlib.h>

/**
  * int_index - a functions that searches for an integer
  * @array: the array
  * @size: number of elements in the array
  * @cmp: pointer to the function for comparing values
  * Return: index of the first element found
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	x = -1;
	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (++x < size)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
