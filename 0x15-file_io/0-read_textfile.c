#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of file to read and print from.
 * @letters: number of letters it should read and print.
 * Return: the actual number of letters it could
 * read and print or 0 if its fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	return (0);
	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	fr = read(fo, buf, letters);
	if (fr == -1)
	{
		free(buf);
		return (0);
	}
	fw = write(STDOUT_FILENO, buf, fr);
	if (fw == -1 || fw != fr)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fo);
	return (fw);
}
