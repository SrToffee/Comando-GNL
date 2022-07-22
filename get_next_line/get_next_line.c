#include "get_next_line.h"

char *get_next_line(int fd)
{
    int     i;
    char    *ret;

    
}

int main (){
    int fd;
    char *path;

    fd = open("foo.txt", O_RDONLY);
    printf("%s", get_next_line(fd));
}