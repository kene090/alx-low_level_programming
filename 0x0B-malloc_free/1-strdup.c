#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicate a string in new memory space
* @str: string to duplicate
*
* Return: pointer to the duplicated string, NULL if fail
*/
char *_strdup(char *str)
{
char *dup;
unsigned int len = 0, i;

if (str == NULL)
return (NULL);

while (str[len])
len++;

dup = malloc(sizeof(char) * (len + 1));

if (dup == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup[i] = str[i];

return (dup);
}

