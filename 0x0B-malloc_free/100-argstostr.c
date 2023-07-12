#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenate command line arguments into a string
* @ac: number of arguments
* @av: array of arguments
*
* Return: pointer to the concatenated string, NULL if fail
*/
char *argstostr(int ac, char **av)
{
int i, n, r = 0, l = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
l++;
l++;
}

str = malloc(sizeof(char) * (l + 1));
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
str[r] = av[i][n];
r++;
}
str[r] = '\n';
r++;
}
str[r] = '\0';

return (str);
}
