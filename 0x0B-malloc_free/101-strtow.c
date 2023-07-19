#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* word_count - Helper function to count the number of words in a string.
* @str: The input string.
*
* Return: The number of words.
*/
int word_count(char *str)
{
int count = 0, i = 0, len = strlen(str);

while (i < len)
{
/* Skip leading spaces */
while (i < len && str[i] == ' ')
i++;

/* Count the words */
if (i < len && str[i] != ' ')
{
count++;
/* Skip the word */
while (i < len && str[i] != ' ')
i++;
}
}

return count;
}

/**
* strtow - Splits a string into words.
* @str: The input string.
*
* Return: Pointer to an array of strings (words), or NULL on failure.
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return NULL;

int wordCount = word_count(str);

/* Allocate memory for the word array */
char **words = malloc(sizeof(char *) * (wordCount + 1));
if (words == NULL)
return NULL;

int i, j, k = 0, len = strlen(str);

/* Iterate over the input string */
for (i = 0; i < len; i++)
{
/* Skip leading spaces */
while (i < len && str[i] == ' ')
i++;

/* Allocate memory for each word */
if (i < len && str[i] != ' ')
{
int start = i;
/* Find the end of the word */
while (i < len && str[i] != ' ')
i++;

int wordLen = i - start;

/* Allocate memory for the word and copy it */
words[k] = malloc(sizeof(char) * (wordLen + 1));
if (words[k] == NULL)
{
/* Free memory in case of failure */
for (j = 0; j < k; j++)
free(words[j]);
free(words);
return NULL;
}

/* Copy the word into the array */
strncpy(words[k], &str[start], wordLen);
words[k][wordLen] = '\0';

k++; /* Move to the next word */
}
}

words[k] = NULL; /* Set the last element to NULL */

return words;
}

