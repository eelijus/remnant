#include "get_next_line.h"

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

char	*get_line(char *line, char buff)
{
	int i;
	char *result;

	if (!(result = (char *)malloc(sizeof(char) * (ft_strlen(line) + 2))))
		return (NULL);
	while (line[i])
	{
		result[i] = line[i];
		i++;
	}
	result[i] = buff;
	i++;
	result[i] = 0;
	free(line);
	return (result);	
}

int get_next_line(char **line)
{
	int i;
	char buff;

	if (!(*line = malloc(1)))
		return (0);
	(*line)[0] = 0;
	while ((i = read(0, &buff, 1)) > 0)
	{
		if (buff == '\n')
			return (1);
		*line = get_line(*line, buff);
		if (!*line)
			return (0);
	}
	if (i == -1)
		return (-1);
	return (0);
}