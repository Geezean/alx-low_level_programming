#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array.
 * @array: input array
 * @size: size of the array
 * @action: function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}

}
