#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, text, quot = 0;

	if (!filename)
	{
		return (-1);
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
