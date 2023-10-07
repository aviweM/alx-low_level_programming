#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, w_file, index = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (index = 0; text_content[index];)
			index++;
	}

	o_file = open(filename, O_WRONLY | O_APPEND);
	w_file = write(o_file, text_content, index);

	if (o_file == -1 || w_file == -1)
		return (-1);

	close(o_file);

	return (1);
}
