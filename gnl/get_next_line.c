/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:16:57 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/03 19:36:35 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_func(int fd, char *buff, char *reading)
{
	int		x;
	char	*keep;

	x = 1;
	while (x != 0)
	{
		x = read(fd, buff, BUFFER_SIZE);
		if (x == -1)
			return (0);
		else if (x == 0)
			break ;
		buff[x] = '\0';
		if (!reading)
			reading = gnl_strdup();
		keep = reading;
		reading = gnl_strjoin(keep, buff);
		free(keep);
		keep = NULL;
		if (gnl_strchr(buff, '\n'))
			break ;
	}
	return (reading);
}

static char	*return_func(char *line)
{
	size_t	len;
	char	*reading;

	len = 0;
	while (line[len] != '\n' && line[len] != '\0')
		len++;
	if (line[len] == '\0')
		return (0);
	reading = gnl_substr(line, len + 1, gnl_strlen(line)-len);
	if (*reading == '\0')
	{
		free(reading);
		reading = NULL;
	}
	line [len + 1] = '\0';
	return (reading);
}

char	*get_next_line(int fd)
{
	char		*buff;
	char		*line;
	static char	*read;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	line = read_func(fd, buff, read);
	free(buff);
	buff = NULL;
	if (!line)
	{
		return (NULL);
	}
	read = return_func(line);
	return (line);
}

// int main(void)
// {
// 	int		fd;
// 	char	*line;

// 	line = NULL;
// 	fd = open("myfile.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("-----------------------------------------------\n");
// 	printf("line:%s", line);
// 	while (line)
// 	{
// 		printf("line:%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// 	free(line);
// 	printf("-----------------------------------------------\n");

// 	return 0;
// }