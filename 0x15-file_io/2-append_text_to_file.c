#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Points to the name of the file.
 * @text_content: String to add to the end of the file.
 *
 * Return: Instance of function fails or filename is NULL,
 * file doesnt exist or user lacks write permission = -1; else = 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int oen, rite, lend = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lend = 0; text_content[lend];)
			lend++;
	}

	oen = open(filename, O_WRONLY | O_APPEND);
	rite = write(oen, text_content, lend);

	if (oen == -1 || rite == -1)
		return (-1);

	close(oen);

	return (1);
}
