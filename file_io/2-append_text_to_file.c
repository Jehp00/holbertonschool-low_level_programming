#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file to append the text
 * @text_content: content for append
 *
 * Return: 1 if succes, -1 i fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, text, quot = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[quot])
		{
			quot++;
		}
		text = write(f, text_content, quot);
		if (text != quot)
		{
			return (-1);
		}
	}
	close(f);
	return (1);
}
