#include <stdlib.h>
#include "main.h"

/**
 *  * count_word - helper function to count the number of words in a string
 *   * @s: string to evaluate
 *    *
 *     * Return: number of words
 *     
 */

int count_word(char *s)
{
		int flag, x, u;

		flag = 0;
		u = 0;

		for (x = 0; s[x] != '\0'; x++)
			{
			if (s[x] == ' ')
			flag = 0;

			else if (flag == 0)
			{													flag = 1;
				u++;
			}										}
return (u);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int n, p = 0, len = 0, words, x = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (n = 0; n <= len; n++)
	{
		if (str[n] == ' ' || str[n] == '\0')
		{
			if (x)
			{
				end = n;
				tmp = (char *) malloc(sizeof(char) * (x + 1));

				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[p] = tmp - x;
				p++;
				x = 0;
			}
		}
		else if (x++ == 0)
			start = n;
	}
	matrix[p] = NULL;

	return (matrix);
}

