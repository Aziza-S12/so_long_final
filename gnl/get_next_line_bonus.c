/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:49:32 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/03 19:09:15 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*read_func(int fd, char *buff, char *reading)
{
	int		xx;
	char	*keep;

	xx = 1;
	while (xx != 0)
	{
		xx = read(fd, buff, BUFFER_SIZE);
		if (xx == -1)
			return (0);
		else if (xx == 0)
			break ;
		buff[xx] = '\0';
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
	static char	*read[MAX_FD];

	if (fd < 0 || fd > MAX_FD || BUFFER_SIZE <= 0)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	line = read_func(fd, buff, read[fd]);
	free(buff);
	buff = NULL;
	if (!line)
	{
		return (NULL);
	}
	read[fd] = return_func(line);
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