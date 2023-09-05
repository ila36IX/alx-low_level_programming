#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - create a file
 *
 * @filename: The name that the new created file will had
 * @text_content: String the will be written to @filename file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	int size;

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fd == -1 || filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	while (*(text_content + i))
		i++;

	size = write(fd, text_content, i);

	if (size == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
