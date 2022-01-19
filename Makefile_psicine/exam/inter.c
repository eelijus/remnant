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

int	main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{	
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (is_stranger(argv[1], i, argv[1][i]))
						write(1, &argv[1][i], 1);
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
