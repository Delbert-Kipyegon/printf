#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a character
 * @args: va_list
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_str - prints a string
 * @args: va_list
 * Return: number of characters printed
 */
int print_str(va_list args)
{
	char *str;
	int count = 0;

	str = va_arg(args, char *);
	while (*str)
	{
		_putchar(*str++);
		count++;
	}
	return (count);
}

/**
 * _printf - our own printf function
 * @format: formatted string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				count += print_char(args);
				break;
			case 's':
				count += print_str(args);
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

