#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file to create.
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *	   if filename is NULL return -1
 *	   if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	/*Check file*/
	if (!filename)
		return (-1);

	/*Determin string lenght*/
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/*Open file*/
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	/*Write file*/
	wr = write(op, text_content, len);

	/*Check if the write and open were successful*/
	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
