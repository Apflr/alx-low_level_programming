#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *  _strdup - fuction tested
 *  @str: char
 *   Return: always success
 */

char *_strdup(char *str)
{
	size_t len = strlen(str);
	if (str == NULL)
	{
	return (NULL);
	}
	char *duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)

	{
		return (NULL);
	}
	strcpy(duplicate, str);

	return (duplicate);
}

