#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * append_text_to_file - append text at the end of a file
 * @filename: the name of the file
 * @text_content: the content of the file to be written
 *
 * Return: 1 on success -1 otherwise
 **/
int append_text_to_file(const char *filename, char *text_content)
{
int fdo, fdw, i;

if (filename == NULL)
return (-1);
fdo = open(filename, O_RDWR | O_APPEND);
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
