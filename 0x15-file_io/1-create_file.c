#include "main.h"
/**
 * create_file -  function that creates a file.
 * @filename: name of file to create.
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fo, fw, l = 0;

	if (filename == NULL)
		return (-1);
	fo = open(filename, O_CREAT | O_RDWR, 0600);
	if (fo == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
	}
	fw = write(fo, text_content, l);
	if (fw == -1)
		return (-1);
	close(fo);
	return (1);
}
