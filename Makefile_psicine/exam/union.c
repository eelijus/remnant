#include <unistd.h>

int	is_stranger(char *str, int index, char c)
{
	int i = 0;

	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		if (is_stranger(s1, i, s1[i]))
			write(1, &s1[i], 1);
		i++;
	}
	j = 0;
	while (s2[j])
	{
		if (is_stranger(s1, i, s2[j]) && is_stranger(s2, j, s2[j]))
			write(1, &s2[j], 1);
		j++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
