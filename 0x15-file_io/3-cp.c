#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - The entry function
 *
 * @ac: Arguments counter
 * @av: Arguments vector
 * Return: 0 if it success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, closed_state_to, closed_state_from;
	char beffer[1024];
	size_t bytes_read;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while ((bytes_read = read(fd_from, beffer, 1024)) > 0)
		write(fd_to, beffer, bytes_read);

	closed_state_from = close(fd_from), closed_state_to = close(fd_to);
	if (closed_state_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				closed_state_to);
		exit(100);
	}
	if (closed_state_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				closed_state_from);
		exit(100);
	}
	return (0);
}
