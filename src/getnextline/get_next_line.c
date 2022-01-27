#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

char *ft_cropbuffer(char *tab, int ln)
{
	int i;
    char *str;

    str = ft_strdup(tab);

	i = 0;
    while(str[i])
    {
        if(str[i++] == '\n')
        {
            str = ft_substr(str, 0, i + ln);
            return (str);
        }
    }
    return (NULL);
}

char *cropstart(char *str)
{
    int i;

	i = 0;
    while(str[i])
    {
        if(str[i++] == '\n')
            return(ft_substr(str, i, (ft_strlen(str) - i + 1)));
    }
    return(str);
}

int isend(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
		if(str[i++] == '\n')
			return (0);
    }
	return (1);
}

char *get_next_line(int fd)
{
    char BUFFER[BUFFER_SIZE + 1];
    static char	*lines = NULL;
    char *ptrsave = NULL;
    char *ptrsavetmp = NULL;
    int nbread = -2;
	if (fd < 0 || BUFFER_SIZE < 1)
        return (NULL);
    
	ptrsave = malloc(sizeof(char*));
    ft_bzero(ptrsave, 2);
    ptrsavetmp = malloc(sizeof(char*));
    if(lines == NULL)
    {
        if((lines = malloc(sizeof(char*))) != NULL)
		{
			lines[0] = '\0';
			ptrsave = ft_strdup(lines);
		}
    }
    ft_bzero(&BUFFER[0], BUFFER_SIZE + 1);
    while(ft_strchr(BUFFER, '\n') == 0 && (nbread = read(fd, BUFFER, BUFFER_SIZE)) > 0)
    {  
		    BUFFER[BUFFER_SIZE] = '\0';
            ptrsave  = ft_strjoin(ptrsave, BUFFER);
            ft_bzero(&BUFFER[0], BUFFER_SIZE);
    }

    if(isend(lines) == 0 && lines[0] != '\n')
    {
	    ptrsave = ft_strjoin(ptrsave, ft_cropbuffer(lines, 0));
        ptrsavetmp = ft_strjoin(ptrsavetmp, ft_cropbuffer(lines, 1));
        if(ft_strncmp(ptrsave, ptrsavetmp) == 0)
            ptrsave = ft_substr(ptrsave, 0, ft_strlen(ptrsave) - 1);
        free(ptrsavetmp);
        lines = cropstart(lines);
    }
    else
    {    
        free(ptrsavetmp);
        free(ptrsave);
        if(lines[0] == '\n')
        {
            return ("\n");
        }
        if(lines[0] == '\0')
        {
            lines = NULL;
        }
        return (lines);   
    }
    return(ptrsave);
}
/*
int main(void)
{
    int fd = open("test.txt", O_RDONLY);
    char *str;
    ft_putstr("TEST1:\n");
    str = get_next_line(fd);
    ft_putstr(str);
    ft_putstr("TEST2:\n");
    str = get_next_line(fd);
    ft_putstr(str);
    ft_putstr("TEST3:\n");
    str = get_next_line(fd);
}*/