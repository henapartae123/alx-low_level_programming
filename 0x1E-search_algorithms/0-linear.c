#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array of integers
                    using linear search algorithm
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in array.
  * @value: The value to search for.
  *
  * Return: The first index where the value is located,
  *         -1 If the value is not present or the array is NULL
  *
  * Description: Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        puts("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
