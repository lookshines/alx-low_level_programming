#include "main.h"

/**
 * append_text_to_file- function that appends text at the end of a file
 * @filename: Name of the file to append to.
 * @text_content: string to be added to the file
 *
 * Return: 1 on success, -1 on failure
 *	   if filename is NULL return -1
 *	   if text_content do nothing
 *	   Return 1 if the file exists and
 *	   -1 if the file does not exist or if you permission
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	/*Check the file*/
	if (!filename)
		return (-1);

	/*Get String lenght*/
	if (!text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/*Open file*/
	op = open(filename, O_WRONLY | O_APPEND);

	/*Write content into file*/
	wr = write(op, text_content, len);

	/*Check if file was open and written into*/
	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
