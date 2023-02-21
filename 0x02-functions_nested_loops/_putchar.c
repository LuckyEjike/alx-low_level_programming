#include "main.h"
#include <unistd.h>
/*
 * _putchar - write the character c to stdout
 * @c: the chacracter to print
 *
 *Return on success 1
 *on error, -1 is return, an rerno is set apropriately.
 */
int -_putchar(char c)
{
return (write(1, &c, 1));
}
