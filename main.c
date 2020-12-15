/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 19:04:29 by mbari             #+#    #+#             */
/*   Updated: 2020/12/15 13:58:11 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
int		ft_strlen(char *str);
char 	*ft_strcpy(char *dist, char *src);
char	*ft_strdup(char *s);
int ft_strcmp(char *s1, char *s2);
int ft_write(int fd, char *str, int size);
int ft_read(int fd, void *buf, int size);
int		xd_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

char	*xd_strcpy(char *dist, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dist[i] = src[i];
		i++;
	}
	dist[i] = '\0';
	return (dist);
}

#include <fcntl.h>

int		main()
{
	int		i;
	char dist[20] = "xd";
	char dist2[20];

	//xd_strcpy(dist, "hellow world!");
	ft_strcpy(dist2,"hello");



	//i = ft_strlen("hello world!");
	//int j = strlen("hello world!");
	//printf("|%d||%d|",i,j);
//printf("xd\n");
		printf("|-%s-||-%s-|\n",dist2, dist);
	
	//printf("|-%d-||-%d-|\n",ft_strcmp("mehdi", "qehdi"), strcmp("mehdi", "10ehdi"));
	//printf("|-%d-||-%d-|\n",ft_strcmp(dist, dist2), strcmp(dist, dist2));
	//printf("|-%s-||-%s-|\n",ft_strdup("NULL"), strdup("NULL"));
	//i = ft_write(-1, "|hello|", -5);
	//int j = ft_write(-1, "|hello|", -5);
	//printf("\n|%d||%d|", i, j);
	//char *buf;
	//int fd = open("ft_write.s", O_RDONLY);
	//i = ft_read(1, buf, 11);
	//int j = read(1, buf, 11);
	//printf("|%s||%d||%d|\n", buf,i, j);
	return (0);
}

