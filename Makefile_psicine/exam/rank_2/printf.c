int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	get_integer(char **s)
{
	int value = 0;
	char *p = *s;

	while (*p >= '0' && *p <= '9')
	{
		value = value * 10 + (*p - '0');
		*s = ++p;
	}
	return (value);
}

int	handle_spec(char **s, va_list ap)
{
	int width = 0;
	int prec = -1;
	int len = 0;
	int size = 0;
	int minus = 1;
	int base;
	long long int s_num;
	unsigned long long int u_num;
	unsigned long long int temp = 0;
	char *print;
	char *str = "01234456789abcdef";

	if (
}

int	ft_printf(const char *fmt, ...)
{
	va_list ap;
	int size = 0;
	char *str = (char *)fmt;

	va_start(ap, fmt);
	while (*s)
	{
		if (*s != '%')
			size += write(1, s++, 1);
		else
		{
			s++;
			size += handle_spec(&s, ap);
		}
	}
	va_end(ap);
	return (size);
}

