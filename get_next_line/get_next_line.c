#include "get_next_line.h"


char *get_next_line(int fd)
{
    char            *object;
    static  char    *rest;
    static  int     i;

    i = 0;
    if(i <= BUFFER_SIZE)
    {
        i++;
        object = malloc(sizeof(char) * 2);
        read(fd, object, 1);
        if(!rest)
        {
            rest = malloc(sizeof(char) * 2);
            rest = '\0';
        }
        rest = ft_strjoin(rest, object);
        if(object[0] == '\n' || object[0] == '\0')
            return(rest);
        else
            return(get_next_line(fd));
    }else
        return(rest);    
}

int main (){
    int fd;
    char *path = "liroliro.txt";

    fd = open(path, O_RDONLY);

    printf("fd = %d \n", fd); 

    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
}