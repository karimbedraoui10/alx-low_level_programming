#include "main.h"
/**
 * append_text_to_file - function to append a text to file
 * @filename: input file
 * @text_content: intput text
 * Return: 1 for success and -1 for error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int rwr;
	int n;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;
		rwr = write(file, text_content, n);
		if (rwr == -1)
			return (-1);
	}
	close(file);
	return (1);
}
