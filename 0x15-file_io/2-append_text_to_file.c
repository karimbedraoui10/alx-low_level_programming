#include "main.h"
/**
 * append_text_to_file - function to append a text to file
 * @filename: input file
 * @text_content: intput text
 * Return: 1 for success and -1 for error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL || text_content == NULL)
		return (-1);
	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);
	fprintf(file, "%s", text_content);

	fclose(file);
	return (1);
}
