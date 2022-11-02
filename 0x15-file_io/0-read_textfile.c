#include "main.h"

/**
 * read_textfile - function that reads a text file and
 *		   prints it to the POSIX standard output.
 * @filename: file to read.
 * @letters: number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print.
 *	   if the file can not be opened or read, return 0
 *	   if filename is NULL return 0
 *	   if write fails or does not write the expected
 *	   amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, size;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	/*Check contect of the file*/
	if (!filename)
		return (0);

	/*check value malloc fialed*/
	if (!buffer)
		return (0);

	/*Open file*/
	fd = open(filename, O_RDONLY);

	/*Read file*/
	r = read(fd, buffer, letters);

	/*write into file*/
	size = write(STDOUT_FILENO, buffer, r);
	if (fd == -1 || size == -1 || r == -1 || size != r)
		return (0);

	close(fd);
	free(buffer);
	return (size);
}
