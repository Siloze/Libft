#ifndef GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*treat_mem(char *mem);
char	*treat_line(char *mem, char *line);

size_t	s_len(const char *s);
size_t	s_lcpy(char *dst, const char *src, size_t dstsize);

char	*s_chr(const char *s, int c, int next);
char	*s_ljoin(char *s1, char *s2, size_t s1_len, size_t s2_len);

#endif
