#include "shell.h"

/**
 * bfree - This frees a pointer and NULLs the address
 * @ptr: This is the address of the pointer to free
 *
 * Return: 1 if freed, but returns 0 otherwise.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
