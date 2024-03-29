#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function to create a file.
 * @filename: pointer to file name
 * @text_content: pointer to the string of the file to be written
 * Description: Create a function that creates a file.
 * Return: 1 if successful, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
