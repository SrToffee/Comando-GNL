#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <sys/stat.h>
# include <fcntl.h> 

#define BUFFER_SIZE 42

char *get_next_line(int fd);

#endif