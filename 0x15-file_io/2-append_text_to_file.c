#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Name of the file
 * @text_content: Text will be append at the end if @filename
 * Return: 1 if it success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	int size;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (text_content == NULL)
	{
		return (1);
	}
	while (*(text_content + i))
	{
		i++;
	}
	size = write(fd, text_content, i);

	if (size == -1 || size == 0)
	{
		return (-1);
	}
	return (1);

}
