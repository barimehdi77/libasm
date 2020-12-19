/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 19:04:29 by mbari             #+#    #+#             */
/*   Updated: 2020/12/19 17:42:50 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
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
	char dist2[20] = "";
	char dist[20] = "asdf";




	/********************************************FT_STRLEN TEST********************************************/
	printf("/********************************************FT_STRLEN TEST********************************************/\n");
	char thisisnull[20] = "";
	char notnull[20] = "are u 1 or a 0";
	char fullofnull[6] = "\0\0\0\0\0\0";
	char hello[20] = "hello";
	char nothing[20]; 
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen("Hello world!!"), strlen("Hello world!!"));
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen("hi how are U??"), strlen("hi how are U??"));
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen(""), strlen(""));
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen(thisisnull), strlen(thisisnull));
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen(nothing), strlen(nothing));
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen(notnull), strlen(notnull));
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen(fullofnull), strlen(fullofnull));
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen(hello), strlen(hello));
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen("anything else?"), strlen("anything else?"));
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen("you want more test?"), strlen("you want more test?"));
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen("Really\t\n\0\f"), strlen("Really\t\n\0\f"));
	printf("|ft_strlen = %d||strlen = %d|\n", ft_strlen("That's enought go test something else ?!"), strlen("That's enought go test something else ?!"));
	
	/********************************************FT_STRCPY TEST********************************************/
	printf("/********************************************FT_STRCPY TEST********************************************/\n");
	printf("1-|ft_strcpy = %s||strcpy = %s|\n", ft_strcpy(notnull,"Copy This!!"), strcpy(notnull,"Copy This!!"));
	printf("2-|ft_strcpy = %s||strcpy = %s|\n", ft_strcpy(nothing,"Copy This!!"), strcpy(nothing,"Copy This!!"));
	printf("3-|ft_strcpy = %s||strcpy = %s|\n", ft_strcpy(hello,nothing), strcpy(hello,nothing));
	printf("4-|ft_strcpy = %s||strcpy = %s|\n", ft_strcpy(notnull,"Copy This!!"), strcpy(notnull,"Copy This!!"));
	printf("5-|ft_strcpy = %s||strcpy = %s|\n", ft_strcpy(notnull,thisisnull), strcpy(notnull,thisisnull));
	printf("6-|ft_strcpy = %s||strcpy = %s|\n", ft_strcpy(thisisnull,hello), strcpy(thisisnull,hello));
	printf("7-|ft_strcpy = %s||strcpy = %s|\n", ft_strcpy(hello,notnull), strcpy(hello,notnull));
	printf("8-|ft_strcpy = %s||strcpy = %s|\n", ft_strcpy(nothing,"Copy This!!"), strcpy(nothing,"Copy This!!"));
	printf("9-|ft_strcpy = %s||strcpy = %s|\n", ft_strcpy(nothing,fullofnull), strcpy(nothing,fullofnull));

	/*vars for str cmp*/	
	char s1[20] = "This is the value";
	char s2[20] = "This is the value";
	char s3[22] = "my name is barimehdi77";
	char s4[20] = "my name is mouhammed";
	char s5[20] = "";
	char s6[20] = ""; 
	
	/********************************************FT_STRCMP TEST********************************************/
	printf("/********************************************FT_STRCMP TEST********************************************/\n");
	printf("1-|ft_strcmp = %d||strcmp = %d|\n", ft_strcmp(s1,s2), strcmp(s1,s2));
	printf("2-|ft_strcmp = %d||strcmp = %d|\n", ft_strcmp(s3,s4), strcmp(s3,s4));
	printf("3-|ft_strcmp = %d||strcmp = %d|\n", ft_strcmp(s5,s6), strcmp(s5,s6));
	printf("4-|ft_strcmp = %d||strcmp = %d|\n", ft_strcmp(s1,s3), strcmp(s1,s3));
	printf("5-|ft_strcmp = %d||strcmp = %d|\n", ft_strcmp(s4,s2), strcmp(s4,s2));
	
	/********************************************FT_STRDUP TEST********************************************/
	printf("/********************************************FT_STRDUP TEST********************************************/\n");
	printf("1-|ft_strdup = %s||strdup = %s|\n", ft_strdup(notnull), strdup(notnull));
	printf("2-|ft_strdup = %s||strdup = %s|\n", ft_strdup("notnull"), strdup("notnull"));
	printf("3-|ft_strdup = %s||strdup = %s|\n", ft_strdup(s1), strdup(s1));
	printf("4-|ft_strdup = %s||strdup = %s|\n", ft_strdup(s6), strdup(s6));
	printf("5-|ft_strdup = %s||strdup = %s|\n", ft_strdup("This  is the text"), strdup("This is the text"));
	printf("6-|ft_strdup = %s||strdup = %s|\n", ft_strdup(""), strdup(""));
	printf("7-|ft_strdup = %s||strdup = %s|\n", ft_strdup(s3), strdup(s3));


	/********************************************FT_WRITE TEST********************************************/
	printf("/********************************************FT_WRITE TEST********************************************/\n");
	printf("1-|ft_write = %d||write = %d|\n",ft_write(1, s3, 23), write(1, s3, 23));
	printf("2-|ft_write = %d||write = %d|\n",ft_write(-1, s3, 23), write(-1, s3, 23));
	printf("3-|ft_write = %d||write = %d|\n",ft_write(1, s3, -23), write(1, s3, -23));
	printf("4-|ft_write = %d||write = %d|\n",ft_write(1, NULL, 23), write(1, NULL, 23));
	printf("5-|ft_write = %d||write = %d|\n",ft_write(6, s3, 23), write(6, s3, 23));
	printf("6-|ft_write = %d||write = %d|\n",ft_write(-1, s3, -23), write(-1, s3, -23));
	printf("7-|ft_write = %d||write = %d|\n",ft_write(-1, NULL, -23), write(-1, NULL, -23));
	printf("8-|ft_write = %d||write = %d|\n",ft_write(1, "Bari mehdi77\n", 23), write(1, "Barimehdi77\n", 23));
	printf("9-|ft_write = %d||write = %d|\n",ft_write(1, "This is longer than 23 I think", 23), write(1, "This is longer than 23 I think", 23));
	printf("10-|ft_write = %d||write = %d|\n",ft_write(1, "Go back in time", 2), write(1, "Go back in time", 2));

	/*vars for the read and write tests*/
	int fd = open("main.c", O_RDONLY);
	int ret;
	int ret_err;
	char buff[30] = "this is a test";
	char readit[30];

	
	/********************************************FT_WRITE TEST WITH THE ERRNO********************************************/
	printf("/********************************************FT_WRITE TEST WITH THE ERRNO********************************************/\n");
	ret = write(1, buff, 13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	ret = ft_write(1, buff, 13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	
	
	printf("\n----------New Test---------\n");
	
	ret = write(1, buff, -13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	ret = ft_write(1, buff, -13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	
	printf("\n----------New Test---------\n");
	
	ret = write(77, buff, 13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	ret = ft_write(77, buff, 13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	
	
	printf("\n----------New Test---------\n");
	
	ret = write(-1, buff, 13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	ret = ft_write(-1, buff, 13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));



	/********************************************FT_READ TEST********************************************/
	printf("/********************************************FT_READ TEST********************************************/\n");
	printf("1-|ft_read= %d||read = %d|\n",ft_read(fd, readit, 3), read(fd, readit, 3));
	printf("2-|ft_read= %d||read = %d|\n",ft_read(fd, readit, 0), read(fd, readit, 0));
	printf("3-|ft_read= %d||read = %d|\n",ft_read(fd, readit, 2), read(fd, readit, 2));
	printf("4-|ft_read= %d||read = %d|\n",ft_read(fd, readit, 5), read(fd, readit, 5));
	printf("5-|ft_read= %d||read = %d|\n",ft_read(fd, readit, 7), read(fd, readit, 7));
	

	/********************************************FT_READ TEST WITH THE ERRNO********************************************/
	printf("/********************************************FT_READ TEST WITH THE ERRNO********************************************/\n");
	ret = read(fd, buff, -13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	ret = ft_read(fd, buff, -13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	
	
	printf("\n----------New Test---------\n");
	ret = read(77, buff, 13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	ret = ft_read(77, buff, -13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	
	
	printf("\n----------New Test---------\n");

	ret = read(-77, buff, -13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	ret = ft_read(-77, buff, -13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	
	
	printf("\n----------New Test---------\n");
	
	ret = read(fd, buff, 13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	ret = ft_read(fd, buff, 13);
	ret_err = errno;
	printf("\nret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));	
	close(fd);



	/********************************************SOME MORE RANDOM TESTS********************************************/
	printf("/********************************************SOME MORE RANDOM TESTS********************************************/\n");

	
	xd_strcpy(dist, "hellow world!");
	ft_strcpy(dist2,"hello world!");



	i = ft_strlen("hello world!");
	int j = strlen("hello world!");
	printf("|%d||%d|\n",i,j);
	printf("|-%s-||-%s-|\n",dist2, dist);
	
	printf("|-%d-||-%d-|\n",ft_strcmp(dist, dist2), strcmp(dist, dist2));
	printf("|-%s-||-%s-|\n",ft_strdup("NULL"), strdup("NULL"));
	i = ft_write(1, "|hello|", 5);
	j = ft_write(1, "|hello|", 5);
	printf("\n|%d||%d|", i, j);
	char *buf;
	fd = open("ft_write.s", O_RDONLY);
	i = ft_read(fd, buf, 11);
	j = read(fd, buf, 11);
	printf("|%d||%d|\n",i, j);

	fd = open("my_main.c", O_RDONLY);
	ret = read(fd, buff, 1337);
	ret_err = errno;
	printf("ret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	close(fd);
	fd = open("my_main.c", O_RDONLY);
	ret = ft_read(fd, buff, 1337);
	ret_err = errno;
	printf("ret = %d, errno = %d, %s\n", ret, ret_err, strerror(ret_err));
	close(fd);
	return (0);
}

