#include "main.h"
/**
 * create_file - function to create a file and a content
 * @filename: name of file to create
 * @text_content: text to write
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int rwr;
	int n_letter;

	if (!filename)
		return (-1);
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (n_letter = 0; text_content[n_letter]; n_letter++)
		;
	rwr = write(file_d, text_content, n_letter);
	if (rwr == -1)
		return (-1);
	close(file_d);
	return (1);
}
