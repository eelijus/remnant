#include <unistd.h>

int	is_stranger(char *str, int index, char c)
{
	int i;

	i = 0;
	while (i < len) //해당 인덱스까지 s1의 모든 문자와 인덱스로 찍힌 확인할 문자를 비교
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
		if (is_stranger(s1, i, s1[i])) //s1의 인덱스마다 함수를 호출
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
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
