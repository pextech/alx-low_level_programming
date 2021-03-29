#include "holberton.h"
/**
 * main - the entry point for the program
 * @argc: the number of argument
 * @argv: the array of an argument
 *
 * Return: sucess always
 **/
int main(int argc, char *argv[])
{
char *buff;
int fdfrom, fdto, fdw, fdr;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = create_buffer(argv[2]);
fdfrom = open(argv[1], O_RDONLY);
fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
fdr = read(fdfrom, buff, 1024);
do {
if (fdr == -1 || fdfrom == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
fdw = write(fdto, buff, fdr);
if (fdw == -1 || fdw != fdr || fdto == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}
fdr = read(fdfrom, buff, 1024);
fdto = open(argv[2], O_WRONLY | O_APPEND);
} while (fdr > 0);
free(buff);
close_file(fdfrom);
close_file(fdto);
return (0);
}
/**
 * close_file - close a file
 * @fd: file descriptor
 **/
void close_file(int fd)
{
int fdc;

fdc = close(fd);
if (fdc == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * create_buffer - create buffer
 * @f: the file name
 *
 * Return: the buffer
 */
char *create_buffer(char *f)
{
char *buff;

buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
exit(99);
}
return (buff);
}
