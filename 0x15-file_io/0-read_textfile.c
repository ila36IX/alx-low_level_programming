#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the standard output
 *
 * @filename: The path of the file (relitive or absulate)
 * @letters: The number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	size_t size;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);

	size = read(fd, buff, letters);
	buff[size] = '\0';

	return (write(STDOUT_FILENO, buff, size));

}
