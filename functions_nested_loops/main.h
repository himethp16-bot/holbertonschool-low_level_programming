#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c)
{
	return (fwrite(&c, 1, 1, stdout) == 1 ? (unsigned char)c : -1);
}

#endif
