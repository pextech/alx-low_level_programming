#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_file - create a file with a given content
 * @filename: the name of the file
 * @text_content: the content of the file to be written
 *
 * Return: 1 on success o otherwise
 **/
int create_file(const char *filename, char *text_content)
{
int fdo, fdw, i;

if (filename == NULL)
return (-1);
fdo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fdo == -1)
return (-1);
if (text_content == NULL)
return (1);
i = 0;
while (text_content[i])
i++;
fdw = write(fdo, text_content, i);
if (fdw == -1)
return (-1);
close(fdo);
return (1);
}
