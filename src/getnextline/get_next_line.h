#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE  1
#endif

void *ft_memcpy (void *dst, const void *src, size_t n);
char *ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
void	ft_putstr(char *s);
void	ft_bzero(void *s, size_t n);
int	ft_strncmp(const char *s1, const char *s2);