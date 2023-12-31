#include "shell.h"

/**
 * bfree - frees a pointer and NUlls the address
 * @ptr: address of the pointer to free
 * Return: 1 if success, 0 if fail
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
