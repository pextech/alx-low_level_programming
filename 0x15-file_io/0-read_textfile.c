#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile - function to read a text file and print to stdout
 * @filename: the name of the file
 * @letters: the number of letters to be printed
 *
 * Return: actual number of letters that was printed
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fdo, fdr, fdw;
char *buf;

if (filename == NULL)
return (0);
fdo = open(filename, O_RDONLY);
if (fdo == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
fdr = read(fdo, buf, letters);
if (fdr == -1)
return (0);
fdw = write(STDOUT_FILENO, buf, fdr);
if (fdw == -1)
return (0);
free(buf);
close(fdo);
return (fdw);
}
